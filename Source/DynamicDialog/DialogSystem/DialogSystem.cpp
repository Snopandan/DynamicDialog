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

void DialogSystem::Query(ADialogCharacter* character) {
	UE_LOG(DialogSystemLog, Log, TEXT("%s: Queried the Dialog System."), *character->GetName());


}
