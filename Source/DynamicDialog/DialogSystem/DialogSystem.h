// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../DynamicDialog/Characters/DialogCharacter.h"
/**
 * 
 */
class DYNAMICDIALOG_API DialogSystem
{
public:
	DialogSystem();
	~DialogSystem();

	static void Query(ADialogCharacter* character);
};
