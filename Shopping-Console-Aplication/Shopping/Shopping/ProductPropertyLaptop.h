#pragma once
#include <iostream>
#include <string>
#include <list>
#include "ProductItem.h"

using namespace std;
class ProductItem;
class ProductPropertyLaptop

{
	



public:
	int item_id;
	int memory;
	int processor;
	int ram;
	int monitor;
	int battery;
	bool touch_screen;
	string color;
	int price;
	ProductItem *product_item;

	ProductPropertyLaptop(void);

	~ProductPropertyLaptop(void);

	ProductPropertyLaptop::ProductPropertyLaptop(int item_id,int memory,int processor,int ram,int monitor,int battery,bool touch_screen,string color,int price);

};

