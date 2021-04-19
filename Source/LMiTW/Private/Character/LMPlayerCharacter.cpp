// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/LMPlayerCharacter.h"

#include "Camera/CameraComponent.h"

ALMPlayerCharacter::ALMPlayerCharacter()
{
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComponent->SetupAttachment(GetRootComponent());
}

bool ALMPlayerCharacter::CanMove()
{
    return true;
}
