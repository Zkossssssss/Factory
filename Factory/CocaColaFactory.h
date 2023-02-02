#pragma once
#include "AbstractFactory.h"
#include "CocaColaWater.h"
#include "CocaColaBottle.h"
#include "CocaColaCover.h"
class CocaColaFactory :public AbstractFactory
{
public:
	AbstractWater* CreateWater();
	AbstractBottle* CreateBottle();
	AbstractCover* CreateCover();
};
