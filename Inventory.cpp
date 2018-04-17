// Inventory.cpp

#include"Inventory.hpp"
#include<iostream>

using namespace std;

Inventory::Inventory()
{	}

void Inventory::DisplayInventory()
{
	cout << "Name: 		Quantity:	Cost:	Product ID: \n";
	for (int i = 0; i < mInventoryID; i++)
	{
		InventoryList[i].Info();
	}
}

void Inventory::AddToInventory( const Product ProductName )
{
	int n;
	n = mInventoryID;
	InventoryList[n] = ProductName;
	mInventoryID = n+1;
}

void Inventory::DisplayInventoryValue()
{
	double Value;

	for (int i = 0; i < mInventoryID; i++)
	{
		Value = Value + InventoryList[i].ViewPrice() * InventoryList[i].ViewQuantity();
	}
	cout << "Inventory value: £" << Value << "\n";
}

string Inventory::ViewName(int i)
{
	return InventoryList[i].ViewName();
}

int Inventory::ViewQuantity(int i)
{
	return InventoryList[i].ViewQuantity();
}

double Inventory::ViewPrice(int i)
{
	return InventoryList[i].ViewPrice();
}

int Inventory::ViewID(int i)
{
	return InventoryList[i].ViewID();
}

Inventory::~Inventory()
{	}