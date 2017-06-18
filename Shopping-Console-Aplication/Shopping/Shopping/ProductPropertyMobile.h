#pragma once
#include <iostream>
#include <string>
#include <list>
#include "ProductItem.h"


using namespace std;
class ProductItem;
class ProductPropertyMobile
{

public:
  	 int item_id;
	 int memory;
	 int  processor;
	 int ram;
	 bool dual_sim;
	 int screen;
	 string color ;
	 int battery;
	 int mp;
	 ProductItem *product_item;

   	 ProductPropertyMobile(void);

	 ~ProductPropertyMobile(void);

	 ProductPropertyMobile::ProductPropertyMobile(int item_id,int memory,int processor,int ram, bool dual_sim,int screen,string color,int battery,int mp);

};

