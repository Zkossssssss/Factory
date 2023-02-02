#pragma once
#include "AbstractBottle.h"
#include "AbstractWater.h"
#include "AbstractFactory.h"
#include "AbstractCover.h"
class Client
{
private:
	AbstractWater* water;
	AbstractBottle* bottle;
	AbstractCover* cover;

public:
	Client(AbstractFactory*);
	void Run();
};

