#include <stdio.h>
#include <iostream>
#include "database.h"

using namespace std;
int main ()
{
	/*
	* DATABASE nesnesi olustugunda dosyadan okur listeleri doldurur
	* DATABASE nesnesi olustugunda dosyadan okuyup iliskileri kurar
	*/
	
	system("color a");
	database *nesne = new database();
	nesne->Anamenu();
	//nesne->ProductItemIliskiKur();
	//nesne->ProductCategoryList.push_back(new ProductCategory(0, "Kategori Adi", "Kategori Tanimi"));
	
	
	

	


	/*çalýþýlabilirlik kontrol*/
	//nesne->CategoryListele();
	//nesne->LaptopListele();
	//nesne->MobileListele();
	//nesne->ShoesListele();
	//nesne->ItemListele();

	//nesne->Bul(3);
	//nesne->ItemBul(1);
	//nesne->LaptopBul(1);
	//nesne->MobileBul(2);
	//nesne->ShoesBul(3);


	//nesne->CategoryAdd();
	//nesne->LaptopAdd();
	//nesne->MobileAdd();
	//nesne->ShoesAdd();
	//nesne->ItemAdd();
		
	
	system("pause");
	return 0;

}