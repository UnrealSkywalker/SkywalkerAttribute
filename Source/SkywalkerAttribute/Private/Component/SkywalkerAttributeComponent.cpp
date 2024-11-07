// Fill out your copyright notice in the Description page of Project Settings.

#include "Component/SkywalkerAttributeComponent.h"

#include "AbilitySystemGlobals.h"

// Sets default values for this component's properties
USkywalkerAttributeComponent::USkywalkerAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void USkywalkerAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	// 获取 AbilitySystemComponent，并绑定 AttributeSet
	if (GetOwner())
	{
		AbilitySystemComponent = Cast<UAbilitySystemComponent>(GetOwner()->GetComponentByClass(UAbilitySystemComponent::StaticClass()));
		if (AbilitySystemComponent)
		{
			for (TSubclassOf<USkywalkerAttributeSet> AttributeSetClass : AttributeSetClassArray)
			{
				USkywalkerAttributeSet *AttributeSet = NewObject<USkywalkerAttributeSet>(GetOwner(), AttributeSetClass);
				if (AttributeSet)
				{
					AbilitySystemComponent->InitStats(AttributeSet);
				}
			}
		}
	}
}

// Called every frame
void USkywalkerAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
