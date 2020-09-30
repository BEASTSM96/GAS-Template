// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "GAT_PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GASTEMPLATE_API AGAT_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AGAT_PlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UGDAttributeSetBase* GetAttributeSetBase() const;

	UFUNCTION(BlueprintCallable, Category = "GASTEMPLATE|PlayerState")
        bool IsAlive() const;

protected:

	UPROPERTY()
	class UGAT_TestAttr * AttributeSetBase;
};
