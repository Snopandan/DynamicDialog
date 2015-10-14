// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Rule.h"

/**
 * 
 */
class DYNAMICDIALOG_API RuleDatabase
{
public:
	RuleDatabase();
	~RuleDatabase();

	void AddRule(Rule* Rule);
	void Finalize();
	int32 GetSize() const  { return Rules.Num(); }
	Rule* GetRule(int32 index) const { return Rules[index]; };

private:
	TArray<Rule*> Rules;
};
