// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Criterion.h"
#include "CriterionList.h"
#include "Response.h"

/**
 * 
 */
class DYNAMICDIALOG_API Rule
{
public:
	Rule(FString Line);
	~Rule();

	void Add(Criterion::EKey Key, FString Value) { Criteria.AddCriterion(Key, Value); };
	int32 GetNumberOfCriteria() const { return Criteria.GetSize(); };
	Criterion* GetCriterion(int32 index) const { return Criteria.GetCriterion(index); };

	Response GetResponse() const { return RuleResponse; };
	friend bool operator<(const Rule& Lhs, const Rule& Rhs);
private:
	CriterionList Criteria;
	Response RuleResponse;
	
};
