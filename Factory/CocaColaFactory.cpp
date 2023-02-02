#include "CocaColaFactory.h"
#include "CocaColaWater.h"

AbstractWater* CocaColaFactory::CreateWater()
{
    return new CocaColaWater();
}

AbstractBottle* CocaColaFactory::CreateBottle()
{
    return new CocaColaBottle();
}

AbstractCover* CocaColaFactory::CreateCover()
{
    return new AbstractCover();
}
