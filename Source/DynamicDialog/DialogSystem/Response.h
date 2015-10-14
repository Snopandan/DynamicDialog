// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class DYNAMICDIALOG_API Response
{
public:
	Response(FString Line, bool Valid = true);
	~Response();

	FString GetLine() const { return Line; };

	bool IsValid() { return Valid; }

private:
	FString Line;
	bool Valid;
};
