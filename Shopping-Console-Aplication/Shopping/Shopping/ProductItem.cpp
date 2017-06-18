#include "ProductItem.h"


ProductItem::ProductItem(void)
{
}
ProductItem::ProductItem(int item_id,int cat_set_id,int cat_id,int brand_id,int series_id,string item_name,int promo_code,string property_set,string item_desc)
{
		this->item_id=item_id;
		this->cat_set_id=cat_set_id;
		this->cat_id=cat_id;
		this->brand_id=brand_id;
		this->series_id=series_id;
		this->item_name=item_name;
		this->promo_code=promo_code;
		this->property_set=property_set;
		this->item_desc=item_desc;
		
}

ProductItem::~ProductItem(void)
{
}
