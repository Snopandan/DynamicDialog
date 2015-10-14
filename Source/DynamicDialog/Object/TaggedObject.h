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


	UFUNCTION(BlueprintPure, Category = "Object")
	bool HasBeenUsed();

	UFUNCTION(BlueprintCallable, Category = "Object")
	void Use();

	UFUNCTION(BlueprintCallable, Category = "Object")
	FString GetName() const{ return Name; }

private: 
	UPROPERTY(EditAnywhere, Category = "Object")
	TArray<FString> ObjectTags;

	UPROPERTY(EditAnywhere, Category = "Object")
    FString Name;

	bool bHasBeenUsed = false;
	
};
