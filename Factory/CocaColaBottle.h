#pragma once
#include "AbstractBottle.h"
#include <iostream>
class CocaColaBottle :public AbstractBottle
{
public:
	void Interract(AbstractWater*);
	void Interract(AbstractCover*);
};
