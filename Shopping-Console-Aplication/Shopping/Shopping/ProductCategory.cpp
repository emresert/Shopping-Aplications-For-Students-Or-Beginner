#include "ProductCategory.h"


ProductCategory::ProductCategory(void)
{
}


//productcategorynin constrackt�r�n�n �al��ma kodlar�n� yaz�p method haline getirdik
ProductCategory::ProductCategory(int cat_id,string cat_name,string cat_desc)
{
	//2 isimde ayn� ise this ile nesnenin de�i�ken olan� belirtilir
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
