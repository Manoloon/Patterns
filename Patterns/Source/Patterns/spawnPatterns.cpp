// Fill out your copyright notice in the Description page of Project Settings.

#include "spawnPatterns.h"


// Sets default values for this component's properties
UspawnPatterns::UspawnPatterns()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UspawnPatterns::BeginPlay()
{
	Super::BeginPlay();

	int stair_pattern(int x);
	{
		//x = 4;
		int i, j;
		for (i = 0; i<(x + 1); i++)
		{
			for (j = 0; j < i; j++)
			{
				UE_LOG(LogTemp, Warning, TEXT("j"));
			}
			UE_LOG(LogTemp, Warning, TEXT("i"));
		}
	}
	
}


// Called every frame
void UspawnPatterns::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

