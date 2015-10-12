// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class DYNAMICDIALOG_API Criterion
{

public:


	enum class EKey
	{
		HP,
		ON_SEE,
		ON_USE
	};
	static const FString KeyNames[];
	

	Criterion(EKey Key);
	~Criterion();

	EKey GetKey() { return Key; };

private:
	EKey Key;

};
