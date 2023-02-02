#pragma once
#pragma once
#include "AbstractBottle.h"
#include <iostream>
class PepsiBottle : public AbstractBottle
{
public:
	void Interract(AbstractWater*);
	void Interract(AbstractCover*);
};
