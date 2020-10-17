// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceEugene.generated.h"

/**
 * 
 */
UCLASS()
class CLOTHINGSYSTEM_API UAnimInstanceEugene : public UAnimInstance
{
	GENERATED_BODY()
	
    
    
protected:
    
UPROPERTY(EditAnywhere,BlueprintReadOnly)
    float MovementSpeed;

    UFUNCTION(BlueprintCallable,Category="Animation")
    virtual void UpdateAnimationProperties();
    
};
