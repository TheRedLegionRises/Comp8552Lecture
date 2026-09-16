// Fill out your copyright notice in the Description page of Project Settings.


#include "Comp8552Lecture/Public/Comp8552LectureGamemode.h"

#include "Comp8552Lecture/Public/Comp8552LectureCharacter.h"

AComp8552LectureGamemode::AComp8552LectureGamemode()
{
	DefaultPawnClass = AComp8552LectureCharacter::StaticClass();
}
