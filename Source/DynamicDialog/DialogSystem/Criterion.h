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
		CHARACTER,
		ON_SEE,
		ON_USE
	};
	static const FString KeyNames[];
	

	Criterion(EKey Key, FString Value);
	~Criterion();

	EKey GetKey() { return Key; };
	FString GetValue() { return Value; };

	bool Equals(Criterion& Rhs) const;
private:
	EKey Key;
	FString Value;

};
