#include <list>
#include <iostream>
#include "ProductCategory.h"
#include "ProductItem.h"
#include "ProductPropertyLaptop.h"
#include "ProductPropertyMobile.h"
#include "ProductPropertyShoes.h"

using namespace std;

class database
{
public:


list<ProductCategory* > ProductCategoryList;
list<ProductItem* >ProductItemList;
list<ProductPropertyLaptop* >ProductPropertyLaptopList;
list<ProductPropertyMobile* >ProductPropertyMobileList;
list<ProductPropertyShoes* >ProductPropertyShoesList;


void Anamenu();
void AnamenuListele();
void Aramamenu();
void EkleMenu();
void SilMenu();
void Duzenle();


void ListeDoldur();



void CategoryListele(); // txt deki categoryleri listeledik 
void ProductCategoryDoldur(); //txt belgesini doldurduk
ProductCategory* Bul(int cat_id); 
void CategoryAdd();
void SaveCategory();
void RemoveCategory();
void EditCategory();


void ProductItemIliskiKur();
void ItemListele();
void ItemDoldur();
ProductItem* ItemBul(int item_id);
void EditItem();
void ItemAdd();
void SaveItem();
void RemoveItem();

void LaptopIliskiKur();
void LaptopListele();
void LaptopDoldur();
ProductPropertyLaptop* LaptopBul(int item_id);
void EditLaptop();
void LaptopAdd();
void SaveLaptop();
void RemoveLaptop();


void MobileIliskiKur();
void MobileListele();
void MobileDoldur();
ProductPropertyMobile* MobileBul(int item_id);
void EditMobile();
void MobileAdd();
void SaveMobile();
void RemoveMobile();


void ShoesIliskiKur();
void ShoesListele();
void ShoesDoldur();
ProductPropertyShoes* ShoesBul(int item_id);
void EditShoes();
void ShoesAdd();
void SaveShoes();
void RemoveShoes();



database();
~database();

};