// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "DialogSystem.h"

DEFINE_LOG_CATEGORY(DialogSystemLog);

DialogSystem::DialogSystem()
{
}

DialogSystem::~DialogSystem()
{
}

void DialogSystem::Query(ADialogCharacter* Character, CriterionList* Context) {
	
	Criterion::EKey Key = Context->GetCriterion(0)->GetKey();
	FString ContextName = Criterion::KeyNames[static_cast<int32>(Key)];
	UE_LOG(DialogSystemLog, Log, TEXT("%s: Queried the Dialog System from %s context"), *Character->GetName(), *ContextName);


}
