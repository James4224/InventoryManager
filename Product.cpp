// Product.cpp

#include"Product.hpp"
#include<string>
#include<iostream>
	
	using namespace std;

	Product::Product()
	{	}

	Product::Product( const string ProductName, const double Cost, const int Quantity, const int productID )
	{
		mCost = Cost;
		mQuantity = Quantity;
		mProductName = ProductName;	 
		mProductID = productID;
	}

	Product::Info()
	{
		cout << mProductName << "		";
		cout << mQuantity << "	";
		cout << mCost << "	";
		cout << mProductID << "  \n";
	}

	string Product::ViewName()
	{
		return mProductName;
	}

	double Product::ViewPrice()
	{
		return mCost;
	}

	int Product::ViewQuantity()
	{
		return mQuantity;
	}

	int Product::ViewID()
	{
		return mProductID;
	}

	Product::~Product()
	{	}
