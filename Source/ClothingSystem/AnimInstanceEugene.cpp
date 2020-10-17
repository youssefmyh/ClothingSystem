// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceEugene.h"

void UAnimInstanceEugene::UpdateAnimationProperties(){
    
    APawn *Pawn = TryGetPawnOwner();
    
    if(Pawn != NULL){
        
        MovementSpeed = Pawn->GetVelocity().Size();
        
    }
    
}

