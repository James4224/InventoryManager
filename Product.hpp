// Product.hpp
// Header file for the product.cpp file
#ifndef PRODUCTDEF
#define PRODUCTDEF

#include<string>

class Product
{
public:
	Product();

	Product( const std::string ProductName, const double Cost, const int Quantity, const int productID);

	std::string ViewName();

	double ViewPrice();

	int ViewQuantity();

	int ViewID();

	Info();
	
	~Product();


private:

	std::string mProductName;

	double mCost;

	int mQuantity;

	int mProductID;
	
};

#endif