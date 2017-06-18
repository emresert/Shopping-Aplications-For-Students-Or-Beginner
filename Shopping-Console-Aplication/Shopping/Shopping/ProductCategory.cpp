#include "ProductCategory.h"


ProductCategory::ProductCategory(void)
{
}


//productcategorynin constracktýrýnýn çalýþma kodlarýný yazýp method haline getirdik
ProductCategory::ProductCategory(int cat_id,string cat_name,string cat_desc)
{
	//2 isimde ayný ise this ile nesnenin deðiþken olaný belirtilir
	this->cat_id=cat_id;
	this->cat_name=cat_name;
	this->cat_desc=cat_desc;
}



//void ProductCategory::AddCategory(int cat_id,string cat_name)
//{
//	
//}


ProductCategory::~ProductCategory(void)
{
}
