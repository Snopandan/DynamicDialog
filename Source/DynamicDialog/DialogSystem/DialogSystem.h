// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CriterionList.h"
#include "Criterion.h"
#include "../DynamicDialog/Characters/DialogCharacter.h"
/**
 * 
 */
class DYNAMICDIALOG_API DialogSystem
{
public:
	DialogSystem();
	~DialogSystem();

	static void Query(ADialogCharacter* Character, CriterionList* Context);
};
