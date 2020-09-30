// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "AttributeSet.h"
#include "GAT_TestAttr.generated.h"

/**
 * 
 */


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS(Blueprintable, BlueprintType)
class GASTEMPLATE_API UGAT_TestAttr : public UAttributeSet
{
	GENERATED_BODY()
public:
	/** Set default values. For example, Health should be set to a positive number */
	UGAT_TestAttr();
	
};
