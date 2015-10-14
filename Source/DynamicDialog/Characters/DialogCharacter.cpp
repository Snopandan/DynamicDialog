// Fill out your copyright notice in the Description page of Project Settings.

#include "DynamicDialog.h"
#include "DialogCharacter.h"


// Sets default values
ADialogCharacter::ADialogCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	 Name = TEXT("Character");

}

// Called when the game starts or when spawned
void ADialogCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADialogCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADialogCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

FString ADialogCharacter::UseObject(ATaggedObject* Obj) {
	Obj->Use();

	CriterionList Context;
	Context.AddCriterion(Criterion::EKey::ON_USE, Obj->GetName());
	Context.AddCriterion(Criterion::EKey::CHARACTER, Name);
	TArray<Response> rep = Dialog.Query(&Context, &Status, &Memory);


	if (rep.Num() != 0) {
		return rep[0].GetLine();
		//UE_LOG(DidalogCharacterLog, Log, TEXT("%s: %s"), *Name, *Line);
		//UE_LOG(LogTemp, Warning, TEXT("%s: %s"), *Name, *Line);
	}

	return TEXT("");
}

TArray<FString> ADialogCharacter::UseObjectAsPlayer(ATaggedObject* Obj, int32 NumberOfResponses) {
	Obj->Use();

	CriterionList Context;
	Context.AddCriterion(Criterion::EKey::ON_USE, Obj->GetName());
	Context.AddCriterion(Criterion::EKey::CHARACTER, Name);
	TArray<Response> rep = Dialog.Query(&Context, &Status, &Memory, NumberOfResponses);

	TArray<FString> rtr;

	for (int32 i = 0; i < rep.Num(); ++i) {
		rtr.Add(rep[i].GetLine());
	}

	return rtr;
}

