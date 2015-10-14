// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Criterion.h"
#include "CriterionList.h"

/**
 * 
 */
class DYNAMICDIALOG_API FactDatabase
{
public:
	FactDatabase();
	~FactDatabase();

	bool checkCriteria(Criterion CriterionToCheck, CriterionList* ContextInfo, CriterionList* CharacterInfo, CriterionList* MemoryInfo) const;

private:
	CriterionList World;
};
