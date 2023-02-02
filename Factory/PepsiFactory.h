#pragma once
#include "AbstractFactory.h"
#include "PepsiWater.h"
#include "PepsiBottle.h"
#include "PepsiCover.h"
class PepsiFactory : public AbstractFactory
{
public:
	AbstractWater* CreateWater();
	AbstractBottle* CreateBottle();
	AbstractCover* CreateCover();
};

