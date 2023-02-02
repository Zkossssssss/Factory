#include "PepsiFactory.h"

AbstractWater* PepsiFactory::CreateWater()
{
    return new PepsiWater();
}

AbstractBottle* PepsiFactory::CreateBottle()
{
    return new PepsiBottle();
}

AbstractCover* PepsiFactory::CreateCover()
{
    return new AbstractCover();
}
