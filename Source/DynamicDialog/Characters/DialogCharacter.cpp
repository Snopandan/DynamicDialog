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

