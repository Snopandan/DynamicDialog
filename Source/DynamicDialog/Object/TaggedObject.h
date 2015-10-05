// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "TaggedObject.generated.h"

UCLASS()
class DYNAMICDIALOG_API ATaggedObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATaggedObject();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;


	UFUNCTION(BlueprintPure, Category = "Tags")
	bool HasBeenUsed();

	UFUNCTION(BlueprintCallable, Category = "Tags")
	void Use();

private: 
	UPROPERTY(EditAnywhere, Category = "Tags")
	TArray<FString> ObjectTags;

	bool bHasBeenUsed = false;
	
};
