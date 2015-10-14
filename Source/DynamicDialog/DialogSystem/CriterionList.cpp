// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "CriterionList.h"

CriterionList::CriterionList()
{
}

CriterionList::~CriterionList()
{
}

void CriterionList::AddCriterion(Criterion::EKey Key, FString Value)
{
	Criteria.Add(new Criterion{ Key, Value });
}