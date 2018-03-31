// Driver.cpp
#include"Product.hpp"
#include "Inventory.hpp"

using namespace std;

#include  <string>


int main(int argc, char const *argv[])


{
	Inventory MyInventory = Inventory();

	Product Hats = Product( "Hats	", 10, 26, 0);

	Product Coats = Product( "Coats	", 50, 7, 1);

	Product Jackets = Product("Jackets	", 35, 12, 2);

	Product Trousers = Product("Trousers", 25, 22, 3);

	Product Shoes = Product("Shoes	", 40, 18, 4);

	Product Socks = Product("Socks	", 5, 11, 5);
	

	MyInventory.AddToInventory(Hats);
	MyInventory.AddToInventory(Coats);
	MyInventory.AddToInventory(Jackets);
	MyInventory.AddToInventory(Trousers);
	MyInventory.AddToInventory(Shoes);
	MyInventory.AddToInventory(Socks);

	MyInventory.DisplayInventory();

	MyInventory.DisplayInventoryValue();

	return 0;
}