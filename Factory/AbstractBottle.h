#pragma once
#include "AbstractWater.h"
#include "AbstractCover.h"
class AbstractBottle
{
public:
	virtual void Interract(AbstractWater*) = 0;
	virtual void Interract(AbstractCover*) = 0;
};


