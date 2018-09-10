// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine//World.h"
#include "BattleTank.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float RelativeSpeed)
{
	// move the barrel the right amount this frame
	// given a max eleveation speed, and the time
	auto Time = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("%f : Barrel->Elevate() called at speed %f"), Time,  RelativeSpeed);
}
