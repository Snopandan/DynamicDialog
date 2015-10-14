// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "Response.h"

Response::Response(FString Line, bool Valid)
	: Line(Line), Valid(Valid)
{
}

Response::~Response()
{
}
