//Inventory.hpp
#ifndef INVENTORYDEF
#define INVENTORYDEF

#include<string>
#include "product.hpp"

class Inventory
{
public:
	Inventory();

	void DisplayInventory();	
	
	void AddToInventory( const Product ProductName);

	void DisplayInventoryValue();

	std::string ViewName(int i);

	int ViewQuantity(int i);

	double ViewPrice(int i);

	int ViewID(int i);

	void AjustPrice(int i, double newprice );

	void AjustQuantity(int i, int newquantity );

	~Inventory();

private:
	int mInventoryID = 0;
	
	Product InventoryList[256];
	
};

#endif