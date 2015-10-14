// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "Rule.h"

Rule::Rule(FString Line)
	: RuleResponse(Line)
{
}

Rule::~Rule()
{
}

bool operator<(const Rule& Lhs, const Rule& Rhs) {
	return Lhs.GetNumberOfCriteria() > Rhs.GetNumberOfCriteria();
}
