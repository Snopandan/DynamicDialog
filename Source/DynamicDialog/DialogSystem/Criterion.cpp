// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "Criterion.h"


const FString Criterion::KeyNames[] = { TEXT("HP"), TEXT("ON_SEE"), TEXT("ON_USE") };

Criterion::Criterion(EKey Key, FString Value)
	: Key(Key), Value(Value)
{
}

Criterion::~Criterion()
{
}

bool Criterion::Equals(Criterion& Rhs) const {
	return Key == Rhs.GetKey() && Value == Rhs.GetValue();
}
