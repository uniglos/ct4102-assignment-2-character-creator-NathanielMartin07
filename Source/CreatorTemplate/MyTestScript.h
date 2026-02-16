// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTestScript.generated.h"

UCLASS()
class CREATORTEMPLATE_API AMyTestScript : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTestScript();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FString string = "";

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	UStaticMeshComponent* mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
