// GameDev.tv Community Podcast


#include "MasterTile.h"


// Sets default values
AMasterTile::AMasterTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMasterTile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMasterTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
