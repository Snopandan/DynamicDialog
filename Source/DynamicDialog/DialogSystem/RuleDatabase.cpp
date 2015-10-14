// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "RuleDatabase.h"

RuleDatabase::RuleDatabase()
{
}

RuleDatabase::~RuleDatabase()
{
}

void RuleDatabase::AddRule(Rule* Rule) {
	Rules.Add(Rule);
}

void RuleDatabase::Finalize() {
	Rules.Sort();
}
