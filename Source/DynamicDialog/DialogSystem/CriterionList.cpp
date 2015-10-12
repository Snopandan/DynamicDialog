// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "CriterionList.h"

CriterionList::CriterionList()
{
}

CriterionList::~CriterionList()
{
}

void CriterionList::AddCriterion(Criterion::EKey Key)
{
	Criteria.Add(new Criterion{Key});
}


Criterion* CriterionList::GetCriterion(int32 index)
{
	return Criteria[index];
}