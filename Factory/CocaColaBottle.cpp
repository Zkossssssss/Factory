#include "CocaColaBottle.h"

void CocaColaBottle::Interract(AbstractWater* water)
{
	std::cout << "CocaColaBottle vzaimodeistvuet s CocaColaWater" << std::endl;
}

void CocaColaBottle::Interract(AbstractCover* cover)
{
	std::cout << "CocaColaBottle vzaimodeistvuet s CocaColaCover" << std::endl;
}
