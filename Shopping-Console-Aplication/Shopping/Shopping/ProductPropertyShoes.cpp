#include "ProductPropertyShoes.h"


ProductPropertyShoes::ProductPropertyShoes(void)
{
}
ProductPropertyShoes::ProductPropertyShoes(int item_id,string color,string size, string meterial,int heel_height,int price)
{
	this->item_id=item_id;
	this->color=color;
	this->size=size;
	this->material=meterial;
	this->heel_height=heel_height;
	this->price=price;
}

ProductPropertyShoes::~ProductPropertyShoes(void)
{
}
