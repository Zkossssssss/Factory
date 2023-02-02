#include "Client.h"

Client::Client(AbstractFactory* factory)
{
	this->water = factory->CreateWater();
	this->bottle = factory->CreateBottle();
	this->cover = factory->CreateCover();
}

void Client::Run()
{
	this->bottle->Interract(water);
	this->bottle->Interract(cover);
}
