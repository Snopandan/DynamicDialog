// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../DynamicDialog/DialogSystem/CriterionList.h"

#include "GameFramework/Character.h"
#include "DialogCharacter.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(DialogSystemLog, Log, All);

UCLASS()
class DYNAMICDIALOG_API ADialogCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADialogCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	virtual FString GetName() { return Name; }
private:
	UPROPERTY(EditAnywhere)
	FString  Name;

	CriterionList Memory;
	CriterionList Status;
	
};
