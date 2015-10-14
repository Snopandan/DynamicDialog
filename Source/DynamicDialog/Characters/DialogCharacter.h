// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../DynamicDialog/DialogSystem/CriterionList.h"
#include "../DynamicDialog/DialogSystem/DialogSystem.h"
#include "../DynamicDialog/Object/TaggedObject.h"
#include "../DynamicDialog/DialogSystem/Response.h"

#include "GameFramework/Character.h"
#include "DialogCharacter.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(DialogCharacterLog, Log, All);

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

	UFUNCTION(BlueprintCallable, Category = "Tags")
	virtual void UseObject(ATaggedObject* Obj);
private:
	UPROPERTY(EditAnywhere)
	FString  Name;

	DialogSystem Dialog;
	CriterionList Memory;
	CriterionList Status;

	
	
};
