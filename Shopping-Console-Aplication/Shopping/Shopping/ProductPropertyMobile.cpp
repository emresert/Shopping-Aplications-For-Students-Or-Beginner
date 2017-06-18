#include "ProductPropertyMobile.h"


ProductPropertyMobile::ProductPropertyMobile(void)
{
}

ProductPropertyMobile::ProductPropertyMobile(int item_id,int memory,int processor,int ram, bool dual_sim,int screen,string color,int battery,int mp)
{
	this->item_id=item_id;
	this->memory=memory;
	this->processor=processor;
	this->ram=ram;
	this->dual_sim=dual_sim;
	this->screen=screen;
	this->color=color;
	this->battery=battery;
	this->mp=mp;



}
ProductPropertyMobile::~ProductPropertyMobile(void)
{
}
