#pragma once
#include <iostream>
#include <string>
#include "ProductItem.h"
using namespace std ;
class ProductItem;
class ProductPropertyShoes
{
public:

	int item_id;
	string color;
	string size;
	string material;
	int heel_height;
	int price;
	ProductItem *product_item;

	ProductPropertyShoes(void);

	~ProductPropertyShoes(void);
	
	ProductPropertyShoes::ProductPropertyShoes(int item_id,string color,string size, string meterial,int heel_height,int price);
	
};

