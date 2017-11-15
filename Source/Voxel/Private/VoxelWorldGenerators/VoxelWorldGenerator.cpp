// Copyright 2017 Phyronnaz

#include "VoxelWorldGenerator.h"
#include "VoxelPrivatePCH.h"

float UVoxelWorldGenerator::GetDefaultValue(int X, int Y, int Z)
{
	return 0;
}

FVoxelMaterial UVoxelWorldGenerator::GetDefaultMaterial(int X, int Y, int Z)
{
	return FVoxelMaterial();
}

void UVoxelWorldGenerator::SetVoxelWorld(AVoxelWorld* VoxelWorld)
{

}

FVector UVoxelWorldGenerator::GetUpVector(int X, int Y, int Z)
{
	return FVector::UpVector;
}
