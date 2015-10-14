// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CriterionList.h"
#include "Criterion.h"
#include "../DynamicDialog/DialogSystem/RuleDatabase.h"
#include "../DynamicDialog/DialogSystem/FactDatabase.h"
#include "Rule.h"
#include "Response.h"

DECLARE_LOG_CATEGORY_EXTERN(DialogSystemLog, Log, All);
/**
 * 
 */
class DYNAMICDIALOG_API DialogSystem
{
public:
	DialogSystem();
	~DialogSystem();
	
	TArray<Response> Query(CriterionList* Context, CriterionList* Character, CriterionList* Memory, int32 NumberOfWantedResponses = 1);

private:

	bool MatchRule(Rule* rule, CriterionList* Context, CriterionList* Character, CriterionList* Memory);
	RuleDatabase* RuleDb;
	FactDatabase* FactDb;
};
