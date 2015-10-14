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

	void AddCriterion(Criterion::EKey Key, FString Value);

	Criterion* GetCriterion(int32 index) const { return Criteria[index]; };
	int32 GetSize() const { return Criteria.Num(); }

private:
	TArray<Criterion*> Criteria;
};
