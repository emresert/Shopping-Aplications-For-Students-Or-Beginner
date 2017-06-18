#include "ProductPropertyLaptop.h"


ProductPropertyLaptop::ProductPropertyLaptop(void)
{
}

ProductPropertyLaptop::ProductPropertyLaptop(int item_id,int memory,int processor,int ram,int monitor,int battery,bool touch_screen,string color,int price)
{
	this->item_id=item_id;
	this->memory=memory;
	this->processor=processor;
	this->ram=ram;
	this->monitor=monitor;
	this->battery=battery;
	this->touch_screen=touch_screen;
	this->color=color;
	this->price=price;
}

ProductPropertyLaptop::~ProductPropertyLaptop(void)
{
}
