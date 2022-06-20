// Fill out your copyright notice in the Description page of Project Settings.


#include "PickableItem.h"
#include "Engine/StaticMesh.h"

// Sets default values
APickableItem::APickableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionRadius = 10.0f;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root Component"));
	RootComponent = SphereComponent;
	SphereComponent->InitSphereRadius(CollisionRadius);
	SphereComponent->SetCollisionProfileName(TEXT("Pawn"));
	
}

// Called when the game starts or when spawned
void APickableItem::BeginPlay()
{
	Super::BeginPlay();

	SphereComponent->SetSphereRadius(CollisionRadius);

	StaticMeshComponent = NewObject<UStaticMeshComponent>(this, UStaticMeshComponent::StaticClass(), TEXT("Static Mesh Component"));

	if (StaticMeshComponent)
	{
		StaticMeshComponent->RegisterComponent();
		StaticMeshComponent->AttachToComponent(RootComponent.Get(), FAttachmentTransformRules::KeepRelativeTransform);
		StaticMeshComponent->CreationMethod = EComponentCreationMethod::Instance;
			
		UBaseItem* Item = ItemClass.GetDefaultObject();
		UStaticMesh* StaticMesh;

		int index = 0;
		if (Item->StaticMeshes.Num() > 0)
		{
			index = rand() % Item->StaticMeshes.Num();
			StaticMesh = Item->StaticMeshes[index];

			if (StaticMesh)
			{
				StaticMeshComponent->SetStaticMesh(StaticMesh);
				StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			}
		}
	}
}

// Called every frame
void APickableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

