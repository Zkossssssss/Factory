#include "Client.h"
#include "CocaColaFactory.h"
#include "PepsiFactory.h"
int main()
{
	Client* client = nullptr;
	client = new Client(new CocaColaFactory());
	client->Run();

	client = new Client(new PepsiFactory());
	client->Run();
}