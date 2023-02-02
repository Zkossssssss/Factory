#pragma once
#include "AbstractBottle.h"
#include "AbstractWater.h"
#include "AbstractCover.h"
class AbstractFactory
{
public:
	virtual AbstractWater* CreateWater() = 0;
	virtual AbstractBottle* CreateBottle() = 0;
	virtual AbstractCover* CreateCover() = 0;
};

