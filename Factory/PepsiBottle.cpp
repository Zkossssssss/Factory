#include "PepsiBottle.h"

void PepsiBottle::Interract(AbstractWater* water)
{
	std::cout << "PepsiBottle vzaimodeistvuet s PepsiaWater" << std::endl;
}

void PepsiBottle::Interract(AbstractCover* cover)
{
	std::cout << "PepsiBottle vzaimodeistvuet s PepsiaCover" << std::endl;
}
