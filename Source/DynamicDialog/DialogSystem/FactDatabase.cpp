// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "FactDatabase.h"

FactDatabase::FactDatabase()
{
}

FactDatabase::~FactDatabase()
{
}

bool FactDatabase::checkCriteria(Criterion CriterionToCheck, CriterionList* ContextInfo, CriterionList* CharacterInfo, CriterionList* MemoryInfo) const {
	for (int32 i = 0; i < World.GetSize(); ++i) {
		if (World.GetCriterion(i)->Equals(CriterionToCheck)) {
			return true;
		}
	}

	for (int32 i = 0; i < ContextInfo->GetSize(); ++i) {
		if (ContextInfo->GetCriterion(i)->Equals(CriterionToCheck)) {
			return true;
		}
	}

	for (int32 i = 0; i < CharacterInfo->GetSize(); ++i) {
		if (CharacterInfo->GetCriterion(i)->Equals(CriterionToCheck)) {
			return true;
		}
	}

	for (int32 i = 0; i < MemoryInfo->GetSize(); ++i) {
		if (MemoryInfo->GetCriterion(i)->Equals(CriterionToCheck)) {
			return true;
		}
	}

	
	return false;
}
