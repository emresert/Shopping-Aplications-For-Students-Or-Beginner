#pragma once
#include <iostream>
#include <string>
#include "ProductItem.h"
#include <list>

using namespace std;
class ProductItem;
class ProductCategory
{
	

	

public:
	int cat_id;
	string cat_name;
	string cat_desc;
	list<ProductItem*> CategoryItem; 

	ProductCategory(void);
	
	
	~ProductCategory(void);


	ProductCategory(int cat_id,string cat_name,string cat_desc); // constracktýr tanýmladýk

	




};

