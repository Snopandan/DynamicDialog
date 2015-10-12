// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "TaggedObject.h"


// Sets default values
ATaggedObject::ATaggedObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

}

// Called when the game starts or when spawned
void ATaggedObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATaggedObject::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

bool ATaggedObject::HasBeenUsed() {
	return bHasBeenUsed;
}

void ATaggedObject::Use(ADialogCharacter* user) {
	bHasBeenUsed = true;

	CriterionList Context;
	Context.AddCriterion(Criterion::EKey::ON_USE);
	DialogSystem::Query(user, &Context);
}

