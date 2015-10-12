// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Criterion.h"
/**
 * 
 */
class DYNAMICDIALOG_API CriterionList
{
public:
	CriterionList();
	~CriterionList();

	void AddCriterion(Criterion::EKey Key);

	Criterion* GetCriterion(int32 index);

private:
	TArray<Criterion*> Criteria;
};
