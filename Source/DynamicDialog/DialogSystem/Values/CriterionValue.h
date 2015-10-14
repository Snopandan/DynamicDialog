// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class DYNAMICDIALOG_API CriterionValue
{
public:
	CriterionValue();
	virtual ~CriterionValue();

	virtual bool Equals(CriterionValue* Rhs) = 0;
};
