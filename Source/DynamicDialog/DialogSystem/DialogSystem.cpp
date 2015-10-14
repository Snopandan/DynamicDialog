// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "DialogSystem.h"

DEFINE_LOG_CATEGORY(DialogSystemLog);

DialogSystem::DialogSystem()
{
	RuleDb = new RuleDatabase();
	FactDb = new FactDatabase();

	Rule* rule1 = new Rule("I See Bird1");
	rule1->Add(Criterion::EKey::ON_USE, "Bird1");
	RuleDb->AddRule(rule1);

	Rule* rule2 = new Rule("I'm Red and I see Bird1");
	rule2->Add(Criterion::EKey::ON_USE, "Bird1");
	rule2->Add(Criterion::EKey::CHARACTER, "Red");
	RuleDb->AddRule(rule2);

	Rule* rule3 = new Rule("I See Bird2");
	rule3->Add(Criterion::EKey::ON_USE, "Bird2");
	RuleDb->AddRule(rule3);

	Rule* rule4 = new Rule("I'm Red and I see Bird2");
	rule4->Add(Criterion::EKey::ON_USE, "Bird2");
	rule4->Add(Criterion::EKey::CHARACTER, "Red");
	RuleDb->AddRule(rule4);

	Rule* rule6 = new Rule("I'm Blue and I see Bird1");
	rule6->Add(Criterion::EKey::ON_USE, "Bird1");
	rule6->Add(Criterion::EKey::CHARACTER, "Blue");
	RuleDb->AddRule(rule6);

	Rule* rule5 = new Rule("I'm Blue and I see Bird2");
	rule5->Add(Criterion::EKey::ON_USE, "Bird2");
	rule5->Add(Criterion::EKey::CHARACTER, "Blue");
	RuleDb->AddRule(rule5);

	RuleDb->Finalize();
	UE_LOG(LogTemp, Warning, TEXT("======================"));
	for (int32 i = 0; i < RuleDb->GetSize(); ++i) {
		FString line = RuleDb->GetRule(i)->GetResponse().GetLine();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *line);
	}
}

DialogSystem::~DialogSystem()
{
	delete RuleDb;
	delete FactDb;
}

TArray<Response> DialogSystem::Query(CriterionList* Context, CriterionList* Character, CriterionList* Memory, int32 NumberOfWantedResponses) {
	TArray<Response> Responses;
	int32 NumberOfResponsesFound = 0;
	Rule* rule;
	for (int32 i = 0; i < RuleDb->GetSize(); ++i) {
		rule = RuleDb->GetRule(i);
		if (MatchRule(rule, Context, Character, Memory)) {
			NumberOfResponsesFound++;
			Responses.Add(rule->GetResponse());

			if (NumberOfResponsesFound >= NumberOfWantedResponses) {
				break;
			}
			
		}
	}
	return Responses;
}

bool DialogSystem::MatchRule(Rule* rule, CriterionList* Context, CriterionList* Character, CriterionList* Memory) {
	for (int32 i = 0; i < rule->GetNumberOfCriteria(); ++i) {
		Criterion* crit = rule->GetCriterion(i);
		if (!FactDb->checkCriteria(*crit, Context, Character, Memory)) {
			return false;
		}
	}

	return true;
}
