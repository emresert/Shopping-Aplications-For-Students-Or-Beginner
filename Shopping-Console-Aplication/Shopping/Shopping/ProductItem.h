#pragma once
#include <iostream>
#include <string>
#include <list>
#include "ProductCategory.h"
#include "ProductPropertyLaptop.h"
#include "ProductPropertyMobile.h"
#include "ProductPropertyShoes.h"


using namespace std;
class ProductCategory;
class ProductPropertyLaptop;
class ProductPropertyMobile;
class ProductPropertyShoes;
class ProductItem
{
public:

	int  item_id;
	int cat_set_id;
	int cat_id;
	int brand_id;
	int series_id;
	string item_name;
	int promo_code;
	string property_set;
	string item_desc;
	ProductCategory *CategoryItems;//sk_product_category  pointer ile liste class deðerleri çektik
	
	ProductPropertyLaptop *LaptopItems;//sk_product_property_laptop  pointer ile liste class deðerleri çektik
	
	ProductPropertyMobile *MobileItems;//sk_product_property_mobile  pointer ile liste class deðerleri çektik
	
	ProductPropertyShoes *ShoesItems;//sk_product_property shoes  pointer ile liste class deðerleri çektik
	

		
	ProductItem(void);
	ProductItem(int item_id,int cat_set_id,int cat_id,int brand_id,int series_id);
	
	
	~ProductItem(void);

	ProductItem::ProductItem(int item_id,int cat_set_id,int cat_id,int brand_id,int series_id,string item_name,int promo_code,string property_set,string item_desc);
};

