#include "database.h"
#include "ProductCategory.h"
#include "ProductItem.h"
#include "ProductPropertyLaptop.h"
#include "ProductPropertyMobile.h"
#include "ProductPropertyShoes.h"
#include <string>
#include <fstream>
#include <list>

//rountable rival lindsey stirling
//
using namespace std;
/*anamenu*/
void database::Anamenu()
{
	cout << " ----> Ana Islemler Ekrani <---- " << endl
<< "1 - Listeleme menusu" << endl
<< "2 - Arama  menusu" << endl
<< "3 - Ekleme " << endl
<< "4 - Sil" << endl
<< "5 - Duzenle" << endl
<< "0 - Cikis" << endl
<< "-------------------" << endl
<< "Yukaridaki rakamlardan birini giriniz!" << endl;
	
	int girilen;
	cin >> girilen;
	
	system("CLS");
	
	if (girilen == 1)
	{
	    AnamenuListele();
	}
	else if (girilen==2)
	
	{
		Aramamenu();
	}
	else if (girilen == 3)

	{
		EkleMenu();
	}
	else if (girilen == 4)

	{
		SilMenu();
	}
	else if (girilen == 5)
	{
		Duzenle();
	}
	else if (girilen == 0 || girilen > 5)

	{
		system("CLS");
		exit(0);
	}
	
}
void database::AnamenuListele()
{
	cout << "Hangi Menuyu Listelemek istiyorsunuz ?" <<endl 
		<< "1 - Kategory Listesi" << endl 		
		<< "2 - Urun  Listesi" << endl
		<< "3 - Laptop Listesi" << endl		
		<< "4 - Mobile Listesi" << endl
		<< "5 - Ayakkabi Listesi" << endl
		<< "0 - Ana Menuye Don" << endl
		<< "-------------------" << endl
		<< "Yukaridaki rakamlardan birini giriniz!" << endl;
	
	int HangiListe;
	cin>>HangiListe;
	
	if (HangiListe==1)
	{
		system("CLS");
		CategoryListele();
	}
	else if (HangiListe==2)
	{
		system("CLS");
		ItemListele();
	}
	else if (HangiListe==3)
	{
		system("CLS");
		LaptopListele();
	}
	else if (HangiListe==4)
	{
		system("CLS");
		MobileListele();
	}
	else if (HangiListe==5)
	{
		system("CLS");
		ShoesListele();
	}
	else if (HangiListe==0)
	{
		system("CLS");
		Anamenu();
	}
	else
	{
		system("CLS");
		cout << "******* LUtfen Tek Karakter Giriniz ******* " <<endl;
		cout<< "-------------------" << endl;
		AnamenuListele();
	}
	
	cout << "******* Anamenuye Donmek icin 0 ' basin ******* " <<endl;
	cin>>HangiListe;
	if (HangiListe==0)
	{
		system("CLS");
		Anamenu();
	}
	

}
void database::Aramamenu()
{
	cout << "Hangi Menude Arama Yapma istiyorsunuz ?" << endl
		<< "1 - Kategory Arama" << endl
		<< "2 - Urun  Arama" << endl
		<< "3 - Laptop Arama" << endl
		<< "4 - Mobile Arama" << endl
		<< "5 - Ayakkabi Arama" << endl
		<< "0 - Ana Menuye Don" << endl
		<< "-------------------" << endl
		<< "Yukaridaki rakamlardan birini giriniz!" << endl;
	int HangiListe;
	cin >> HangiListe;

	if (HangiListe == 1)
	{
		system("CLS");
		cout << "Bulmak Ýstediðiniz Kategorinin Id No'sunu Giriniz.";
		int cat_id;
		cin >> cat_id;
		
		if (Bul(cat_id) == NULL)
		{
			system("CLS");
			cout << "Aradiginiz kayit bulunamadi.Lutfen Listeden Bakip Farkli bir ID no giriniz." << endl;
			ItemListele();

		}
		
	}
	else if (HangiListe == 2)
	{
		system("CLS");
		cout << "Bulmak Ýstediðiniz Urunun Id No'sunu Giriniz.";
		int item_id;
		cin >> item_id;
		
		if (ItemBul(item_id) == NULL)
		{
			system("CLS");
			cout << "Aradiginiz kayit bulunamadi.Lutfen Listeden Bakip Farkli bir ID no giriniz." << endl;
			ItemListele();

		}
		
	
		
		
	}
	else if (HangiListe == 3)
	{
		system("CLS");
		cout << "Bulmak Ýstediðiniz Urunun Id No'sunu Giriniz.";
		int item_id;
		cin >> item_id;
		
		if (ItemBul(item_id) == NULL)
		{
			system("CLS");
			cout << "Aradiginiz kayit bulunamadi.Lutfen Listeden Bakip Farkli bir ID no giriniz." << endl;
			LaptopListele();
			
			

			
		}
		
		
		
	}
	else if (HangiListe == 4)
	{
		system("CLS");
		cout << "Bulmak Ýstediðiniz Urunun Id No'sunu Giriniz.";
		int item_id;
		cin >> item_id;
			
			if (MobileBul(item_id) == NULL)
			{
				system("CLS");
				cout << "Aradiginiz kayit bulunamadi.Lutfen Listeden Bakip Farkli bir ID no giriniz." << endl;
				MobileListele();
				

			}
			
		
		
	}
	else if (HangiListe == 5)
	{
		system("CLS");
		cout << "Bulmak Ýstediðiniz Urunun Id No'sunu Giriniz.";
		int item_id;
		cin >> item_id;
		
		if (ShoesBul(item_id) == NULL)
		{
			system("CLS");
			cout << "Aradiginiz kayit bulunamadi.Lutfen Listeden Bakip Farkli bir ID no giriniz." << endl;
			ShoesListele();

		}
		

	}
	
	else if (HangiListe == 0)
	{
		system("CLS");
		Anamenu();
	}
	else 
	{
		cout << "******* Lütfen Tek Karakter Giriniz ******* " << endl;
		cout << "-------------------" << endl;
		system("CLS");
		Aramamenu();

	}
	
	Anamenu();
	
	

}
void database::EkleMenu()
{
	cout << "Hangi Menude Ekleme Yapmak istiyorsunuz ?" << endl
		<< "1 - Kategory Ekle" << endl
		<< "2 - Urun  EKLE" << endl
		<< "3 - Laptop Ekle" << endl
		<< "4 - Mobile Ekle" << endl
		<< "5 - Ayakkabi Ekle" << endl
		<< "0 - Ana Menuye Don" << endl
		<< "-------------------" << endl
		<< "Yukaridaki rakamlardan birini giriniz!" << endl;

	int HangiListe;
	cin >> HangiListe;

	if (HangiListe == 1)
	{
		system("CLS");
		CategoryAdd();
		
		
	}
	else if (HangiListe == 2)
	{
		system("CLS");
		ItemAdd();
		
		
	}
	else if (HangiListe == 3)
	{
		system("CLS");
		LaptopAdd();
		
		
	}

	else if (HangiListe == 4)
	{
		system("CLS");
		MobileAdd();
		
		
	}
	else if (HangiListe == 5)
	{
		system("CLS");
		ShoesAdd();
		
	
	}
	else if (HangiListe == 0)
	{
		system("CLS");
		Anamenu();
	}
	else
	{
		system("CLS");
		cout << "******* Lütfen Tek Karakter Giriniz ******* " << endl;
		cout << "-------------------" << endl;
		EkleMenu();
	}
	cout << "Kayýt islemi Tamamlandi.Anamenuye Donmek icin 0 'a basin" << endl;
	cin >> HangiListe;
	if (HangiListe == 0)
	{
		system("CLS");
		Anamenu();
	}

	
	
	
}
void database::SilMenu()
{
	cout << "Hangi Menude Silme islemi Yapmak istiyorsunuz ?" << endl
		<< "1 - Kategory Sil" << endl
		<< "2 - Urun  Sil" << endl
		<< "3 - Laptop Sil" << endl
		<< "4 - Mobile Sil" << endl
		<< "5 - Ayakkabi Sil" << endl
		<< "0 - Ana Menuye Don" << endl
		<< "-------------------" << endl
		<< "Yukaridaki rakamlardan birini giriniz!" << endl;

	int HangiListe;
	cin >> HangiListe;

	if (HangiListe == 1)
	{
		system("CLS");
		RemoveCategory();


	}
	else if (HangiListe == 2)
	{
		system("CLS");
		RemoveItem();


	}
	else if (HangiListe == 3)
	{	
		system("CLS");
		RemoveLaptop();


	}

	else if (HangiListe == 4)
	{
		system("CLS");
		RemoveMobile();


	}
	else if (HangiListe == 5)
	{
		system("CLS");
		RemoveShoes();


	}
	else if (HangiListe == 0)
	{
		system("CLS");
		Anamenu();
	}
	else
	{
		cout << "******* Lütfen Tek Karakter Giriniz ******* " << endl;
		cout << "-------------------" << endl;
		system("CLS");
		SilMenu();
	}
	
	cout << "Anamenuye Donmek icin 0 'a basin" << endl;
	cin >> HangiListe;
	if (HangiListe == 0)
	{
		system("CLS");
		Anamenu();
	}
}
void database::Duzenle()
{
	cout << "Hangi Menude Duzenleme islemi Yapmak istiyorsunuz ?" << endl
		<< "1 - Kategory Duzenle" << endl
		<< "2 - Urun  Duzenle" << endl
		<< "3 - Laptop Duzenle" << endl
		<< "4 - Mobile Duzenle" << endl
		<< "5 - Ayakkabi Duzenle" << endl
		<< "0 - Ana Menuye Don" << endl
		<< "-------------------" << endl
		<< "Yukaridaki rakamlardan birini giriniz!" << endl;

	int HangiListe;
	cin >> HangiListe;

	if (HangiListe == 1)
	{
		system("CLS");
		EditCategory();


	}
	else if (HangiListe == 2)
	{
		system("CLS");
		EditItem();


	}
	else if (HangiListe == 3)
	{
		system("CLS");
		EditLaptop();


	}

	else if (HangiListe == 4)
	{
		system("CLS");
		EditMobile();


	}
	else if (HangiListe == 5)
	{
		system("CLS");
		EditShoes();


	}
	else if (HangiListe == 0)
	{
		system("CLS");
		Anamenu();
	}
	else
	{
		system("CLS");
		cout << "******* Lütfen Tek Karakter Giriniz ******* " << endl;
		cout << "-------------------" << endl;
		Duzenle();
	}

	cout << "Anamenuye Donmek icin 0 'a basin" << endl;
	cin >> HangiListe;
	if (HangiListe == 0)
	{
		system("CLS");
		Anamenu();
	}
	
}



void database::ListeDoldur()
{
	
	ProductCategoryDoldur();
	ItemDoldur();
	LaptopDoldur();
	MobileDoldur();
	ShoesDoldur();



}


void database::CategoryListele()
{
	list<ProductCategory *>::iterator itr;

	for (itr=ProductCategoryList.begin();itr !=ProductCategoryList.end();itr++)
	{
		cout<< (*itr)->cat_id << " " << (*itr)->cat_name <<" "<<(*itr)->cat_desc << endl;
		
	}

}
void database::ProductCategoryDoldur()
{
	ifstream dosyaOku("addProductCategory.txt");
		int cat_id;
	string cat_name;
	string cat_desc;
	
		while (!dosyaOku.eof())
		{
			dosyaOku >> cat_id >>cat_name >> cat_desc;
			ProductCategoryList.push_back(new ProductCategory(cat_id,cat_name,cat_desc));
		}
		dosyaOku.close();

}
ProductCategory* database::Bul(int cat_id)
{
	

	list<ProductCategory *>::iterator itr;

	for (itr=ProductCategoryList.begin();itr !=ProductCategoryList.end();itr++)
	{

		if ((*itr) ->cat_id==cat_id)
		{
		cout<< (*itr)->cat_id << " " << (*itr)->cat_name <<" "<<(*itr)->cat_desc << endl;
		return *itr;
		}
		
		
	}
	return NULL;
}
void database::CategoryAdd()
{
	int cat_id;
	string cat_name;
	string cat_desc;


	cout<<"Lutfen Kategori Id girin:\n";
	cin>>cat_id;
	cout<<"Lutfen Kategori Adi girin:\n";
	cin>>cat_name;
	cout<<"Lutfen Kategori Tanimi girin:\n";
	cin>>cat_desc;
	//ProductCategoryList.push_back(new ProductCategory(cat_id,cat_name,cat_desc));
	if (Bul(cat_id) == NULL)
	{ 
		system("CLS");
		ProductCategoryList.push_back(new ProductCategory(cat_id,cat_name,cat_desc));
	}
	else
	{
		system("CLS");
		cout << "Girmis Oldugunuz Id' de zaten bir kayit var.Lutfen Yeni Degerler Giriniz..." << endl;
		CategoryAdd();
	}
	
	SaveCategory();
	

}
void database::SaveCategory()
{
	ofstream Save("addProductCategory.txt");
	//int boyut=ProductCategoryList.size();
	list<ProductCategory*>::iterator i;
	//i = ProductCategoryList.begin();
	int k = ProductCategoryList.size();
	for (i = ProductCategoryList.begin(); i != ProductCategoryList.end(); i++)
	{
		k--;
		if (k == 0)
		{
			Save << (*i)->cat_id << " " << (*i)->cat_name << " " << (*i)->cat_desc;
		}
		else
		{
			Save << (*i)->cat_id << " " << (*i)->cat_name << " " << (*i)->cat_desc << endl;
		}
		
	}
	Save.close();
	
}
void database::RemoveCategory()
{
	int cat_id;
	cout << "Lutfen Silmek icin Kategory Id Giriniz"<<endl;
	cin >> cat_id;
	
	if (Bul(cat_id) == NULL)
	{
		system("CLS");
		cout << "Aradiginiz id'de silmek icin herhangi bir urun bulunamadi.Lutfen listeye bakip yeni deger girin." << endl;
		CategoryListele();
	}
	else
	{
		list<ProductCategory*>::iterator itr;
		for (itr = ProductCategoryList.begin(); itr != ProductCategoryList.end(); itr++)
		{
			if ((*itr)->cat_id == cat_id)
			{
				ProductCategoryList.erase(itr);
				break;
			}
		}
		cout << "Kategori Silindi..." << endl;
	}

	
	
	SaveCategory();
	
}
void database::EditCategory()
{
	CategoryListele();
	int catbul;
	cout << "Lutfen listeden duzenlenecek kategorinin id numarasini secin.." << endl;
	cin >> catbul;
	if (Bul(catbul)==NULL)
	{
		system("CLS");
		cout << "Duzenlemek istediginiz kategori listede bulunmamaktadir.Lutfen listeden yeni bir Kategori secin" << endl;
		EditCategory();
	}
	//Bul(catbul);
	else
	{
		list<ProductCategory*>::iterator itr; 

		
		string cat_name;
		string cat_desc;

		
		cout << "Duzenlemek icin Yeni bir Kategori Adi Girin" << endl;
		cin >> cat_name;
		cout << "Duzenlemek icin Yeni Kategori Tanimi" << endl;
		cin >> cat_desc;

		for (itr = ProductCategoryList.begin(); itr != ProductCategoryList.end(); itr++) 
		{
			if ((*itr)->cat_id == catbul) 
			{
				
				(*itr)->cat_id = catbul;
				(*itr)->cat_name = cat_name;
				(*itr)->cat_desc = cat_desc;
				
			}
		}


	}
	SaveCategory();
	cout << "Kategori Basariyla duzenlendi..." << endl;
	
	

	

}




void database::ProductItemIliskiKur(){
	ifstream dosyaOku("addProductItem.txt",ios::app);
		if (dosyaOku.is_open())
		{
			int  item_id;
			int cat_set_id;
			int cat_id;
			int brand_id;
			int series_id;
			string item_name;
			int promo_code;
			string property_set;
			string item_desc;	
			

			while (!dosyaOku.eof())
			{
				dosyaOku>> item_id >>cat_set_id >> cat_id >> brand_id >> series_id >> item_name >> promo_code >> property_set >> item_desc;
				
				ItemBul(item_id)->CategoryItems = Bul(cat_id);
				Bul(cat_id)->CategoryItem.push_back(ItemBul(item_id));
				system("CLS");
				//cout << ItemBul(1)->CategoryItems->cat_name;
				//system("pause");
				/*ItemBul(item_id)->LaptopItems = LaptopBul(item_id);
				ItemBul(item_id)->MobileItems = MobileBul(item_id);
				ItemBul(item_id)->ShoesItems = ShoesBul(item_id);*/
			}	
		}
		system("pause");
}
void database::ItemListele()
{
	list<ProductItem *>::iterator itr;

	for (itr=ProductItemList.begin();itr !=ProductItemList.end();itr++)
	{
		cout<< (*itr)->item_id<< " " << (*itr)->cat_set_id <<" "<<(*itr)->cat_id <<" "<<(*itr)->brand_id<<" "<<(*itr)->series_id<<" "<<(*itr)->item_name<<" "<<(*itr)->promo_code<<" "<<(*itr)->property_set<<" "<<(*itr)->item_desc <<endl;
		
	}
	/*int iliskigor;
	cout << "iliski gormek icin 1 e basin" << endl;
	cin >> iliskigor;
	if (iliskigor==1)
	{
		ProductItemIliskiKur();
	}*/
	
}
void database::ItemDoldur()
{
ifstream dosyaOku("addProductItem.txt",ios::app);
		if (dosyaOku.is_open())
		{
	int  item_id;
	int cat_set_id;
	int cat_id;
	int brand_id;
	int series_id;
	string item_name;
	int promo_code;
	string property_set;
	string item_desc;
	
		while (!dosyaOku.eof())
		{
			dosyaOku>> item_id >>cat_set_id >> cat_id >> brand_id >> series_id >> item_name >> promo_code >> property_set >> item_desc ;

			ProductItemList.push_back(new ProductItem(item_id,cat_set_id,cat_id,brand_id,series_id,item_name,promo_code,property_set,item_desc));
			
		}	
		}
}
ProductItem* database::ItemBul(int item_id)
{
list<ProductItem *>::iterator itr;

	for (itr=ProductItemList.begin();itr !=ProductItemList.end();itr++)
	{
		if ((*itr) ->item_id==item_id)
		{
			cout<< (*itr)->item_id<< " " << (*itr)->cat_set_id <<" "<<(*itr)->cat_id <<" "<<(*itr)->brand_id<<" "<<(*itr)->series_id<<" "<<(*itr)->item_name<<" "<<(*itr)->promo_code<<" "<<(*itr)->property_set<<" "<<(*itr)->item_desc <<endl;
		return *itr;
		}
		
	}
	return NULL;
}
void database::ItemAdd()

{
	int  item_id;
	int cat_set_id;
	int cat_id;
	int brand_id;
	int series_id;
	string item_name;
	int promo_code;
	string property_set;
	string item_desc;
	
	
	cout<<"Lutfen Urun Id girin:\n";
	cin>>item_id;
	cout<<"Lutfen Kategory Set id girin:\n";
	cin>>cat_set_id;
	cout<<"Lutfen Kategory Id girin:\n";
	cin>>cat_id;
	cout<<"Lutfen Brand Id girin :\n";
	cin>>brand_id;
	cout<<"Lütfen  Seri Id girin:\n";
	cin>>series_id;
	cout<<"Lutfen Urun adi girin :\n";
	cin>>item_name;
	cout<<"Lutfen Promosyon kodu girin. (integer):\n";
	cin>>promo_code;
	cout<<"Lutfen ekstra ozellik istiyorsaniz girin:\n";
	cin>>property_set;
	cout<<"Lutfen urunu tanýmlayin:\n";
	cin>>item_desc;

	
	//ProductItemList.push_back(new ProductItem(item_id,cat_set_id,cat_id,brand_id,series_id,item_name,promo_code,property_set,item_desc));
	
	if (ItemBul(item_id) == NULL)
	{
		system("CLS");
		ProductItemList.push_back(new ProductItem(item_id, cat_set_id, cat_id, brand_id, series_id, item_name, promo_code, property_set, item_desc));
	}
	else
	{
		system("CLS");
		cout << "Girmis Oldugunuz Id' de zaten bir kayit var.Lutfen Yeni Degerler Giriniz..." << endl;
		ItemAdd();
	}

	SaveItem();
	
	
	
	
	
}
void database::SaveItem()
{
ofstream Save("addProductItem.txt");
	//int boyut=ProductCategoryList.size();
	list<ProductItem*>::iterator i;
	//i = ProductCategoryList.begin();
	int k = ProductItemList.size();
	for (i = ProductItemList.begin(); i != ProductItemList.end(); i++)
	{
		k--;
		if (k == 0)
		{
			Save << (*i)->item_id<< " " << (*i)->cat_set_id <<" "<<(*i)->cat_id <<" "<<(*i)->brand_id<<" "<<(*i)->series_id<<" "<<(*i)->item_name<<" "<<(*i)->promo_code<<" "<<(*i)->property_set<<" "<<(*i)->item_desc;
		}
		else
		{
			Save << (*i)->item_id<< " " << (*i)->cat_set_id <<" "<<(*i)->cat_id <<" "<<(*i)->brand_id<<" "<<(*i)->series_id<<" "<<(*i)->item_name<<" "<<(*i)->promo_code<<" "<<(*i)->property_set<<" "<<(*i)->item_desc<< endl;
		}
		
	}
	Save.close();
	
}
void database::RemoveItem()
{
	int item_id;
	cout << "Lutfen Silmek icin Urun Item Id Giriniz" << endl;
	cin >> item_id;

	list<ProductItem*>::iterator i;
	for (i = ProductItemList.begin(); i != ProductItemList.end(); i++)
	{
		if ((*i)->item_id == item_id)
		{
			ProductItemList.erase(i);
			break;
		}
	}
	
	SaveItem();

}
void database::EditItem()
{
	ItemListele();
	int itembul;
	cout << "Lutfen listeden duzenlenecek Urunun id numarasini secin.." << endl;
	cin >> itembul;
	if (ItemBul(itembul) == NULL)
	{
		system("CLS");
		cout << "Duzenlemek istediginiz Urun listede bulunmamaktadir.Lutfen Listeden yeni bir Urun secin" << endl;
		EditItem();
	}
	
	else
	{
		list<ProductItem*>::iterator itr; 

		
		int cat_set_id;
		int cat_id;
		int brand_id;
		int series_id;
		string item_name;
		int promo_code;
		string property_set;
		string item_desc;

		
		cout << "Duzenlemek icin Yeni bir Kategori Set id Girin" << endl;
		cin >> cat_set_id;
		cout << "Duzenlemek icin Yeni Kategori id girin" << endl;
		cin >> cat_id;
		cout << "Duzenlemek icin Yeni Marka id  girin" << endl;
		cin >> brand_id;
		cout << "Duzenlemek icin Yeni seri id girin" << endl;
		cin >> series_id;
		cout << "Duzenlemek icin Yeni Urun adi" << endl;
		cin >> item_name;
		cout << "Duzenlemek icin Yeni sayýsal promosyon kodu girin" << endl;
		cin >> promo_code;
		cout << "Duzenlemek icin ozellik Tanimi girin" << endl;
		cin >> property_set;
		cout << "Duzenlemek icin Yeni Urun Tanimi" << endl;
		cin >> item_desc;

		for (itr = ProductItemList.begin(); itr != ProductItemList.end(); itr++)
		{
			if ((*itr)->item_id == itembul)
			{
				
				(*itr)->cat_id = cat_id;
				(*itr)->cat_set_id = cat_set_id;
				(*itr)->brand_id = brand_id;
				(*itr)->series_id = series_id;
				(*itr)->item_name = item_name;
				(*itr)->promo_code = promo_code;
				(*itr)->property_set = property_set;
				(*itr)->item_desc = item_desc;
			}
		}
	}
	SaveItem();
	cout << "Urun Basariyla duzenlendi..." << endl;
}


void database::LaptopIliskiKur()
{
	ifstream dosyaOku("addProductPropertyLaptop.txt",ios::app);
		if (dosyaOku.is_open())
		{
	int item_id;
	int memory;
	int processor;
	int ram;
	int monitor;
	int battery;
	bool touch_screen;
	string color;
	int price;
	
		while (!dosyaOku.eof())
		{
			dosyaOku>> item_id >>memory >> processor >> processor >> ram >> monitor >> battery >> touch_screen >> color >> price ;
			LaptopBul(item_id) ->product_item = ItemBul(item_id);
			ItemBul(item_id)->LaptopItems = LaptopBul(item_id) ;
		  
			
		}	
		}
}
void database::LaptopListele()
{
	list<ProductPropertyLaptop* >::iterator itr;

	for (itr=ProductPropertyLaptopList.begin();itr !=ProductPropertyLaptopList.end();itr++)
	{
		cout<< (*itr)->item_id<< " " << (*itr)->memory<<" "<<(*itr)->processor <<" "<<(*itr)->ram<<" "<<(*itr)->monitor<<" "<<(*itr)->battery<<" "<<(*itr)->touch_screen<<" "<<(*itr)->color<<" "<<(*itr)->price <<endl;
		
	}
}
void database::LaptopDoldur()
{
	ifstream dosyaOku("addProductPropertyLaptop.txt",ios::app);
		if (dosyaOku.is_open())
		{
			int item_id;
			int memory;
			int processor;
			int ram;
			int monitor;
			int battery;
			bool touch_screen;
			string color;
			int price;
	
			while (!dosyaOku.eof())
			{
				dosyaOku>> item_id >>memory >> processor >> ram >> monitor >> battery >> touch_screen >> color >> price ;

		  
				ProductPropertyLaptopList.push_back(new ProductPropertyLaptop(item_id,memory,processor,ram,monitor,battery,touch_screen,color,price));
			}	
		}
}
ProductPropertyLaptop* database::LaptopBul(int item_id)
{
	list<ProductPropertyLaptop *>::iterator itr;

	for (itr=ProductPropertyLaptopList.begin();itr !=ProductPropertyLaptopList.end();itr++)
	{
		if ((*itr) ->item_id==item_id)
		{
			cout<< (*itr)->item_id<< " " << (*itr)->memory<<" "<<(*itr)->processor <<" "<<(*itr)->ram<<" "<<(*itr)->monitor<<" "<<(*itr)->battery<<" "<<(*itr)->touch_screen<<" "<<(*itr)->color<<" "<<(*itr)->price <<endl;
		return *itr;
		}
		
	}
	return NULL;
}
void database::LaptopAdd()
{
	int item_id;
	int memory;
	int processor;
	int ram;
	int monitor;
	int battery;
	bool touch_screen;
	string color;
	int price;
	

	cout<<"Lutfen Urun Id girin:\n";
	cin>>item_id;
	cout<<"Lutfen Memory degeri girin:\n";
	cin>>memory;
	cout<<"Lutfen islemci degeri girin :\n";
	cin>>processor;
	cout<<"Lutfen Ram degeri girin:\n";
	cin>>ram;
	cout<<"Lutfen Monitor degeri girin :\n";
	cin>>monitor;
	cout<<"Lutfen kac Battery (Mah) degeri girin:\n";
	cin>>battery;
	cout<<"Lutfen Dokunmatik ekran olup olmadigini girin.(1/0):\n";
	cin>>touch_screen;
	cout<<"Lutfen Renk girin:\n";
	cin>>color;
	cout<<"Lutfen Urun Bedeli girin:\n";
	cin>>price;

	//ProductPropertyLaptopList.push_back(new ProductPropertyLaptop(item_id,memory,processor,ram,monitor,battery,touch_screen,color,price));
	

	if (LaptopBul(item_id) == NULL)
	{
		system("CLS");
		ProductPropertyLaptopList.push_back(new ProductPropertyLaptop(item_id, memory, processor, ram, monitor, battery, touch_screen, color, price));
	}
	else
	{
		system("CLS");
		cout << "Girmis Oldugunuz Id' de zaten bir kayit var.Lutfen Yeni Degerler Giriniz..." << endl;
		LaptopAdd();
	}
	
	
	SaveLaptop();
	
}
void database::SaveLaptop()
{
	ofstream Save("addProductPropertyLaptop.txt");
	//int boyut=ProductCategoryList.size();
	list<ProductPropertyLaptop*>::iterator i;
	//i = ProductCategoryList.begin();
	int k = ProductPropertyLaptopList.size();
	for (i = ProductPropertyLaptopList.begin(); i != ProductPropertyLaptopList.end(); i++)
	{
		k--;
		if (k == 0)
		{
			Save <<  (*i)->item_id<< " " << (*i)->memory<<" "<<(*i)->processor <<" "<<(*i)->ram<<" "<<(*i)->monitor<<" "<<(*i)->battery<<" "<<(*i)->touch_screen<<" "<<(*i)->color<<" "<<(*i)->price;
		}
		else
		{
			Save << (*i)->item_id<< " " << (*i)->memory<<" "<<(*i)->processor <<" "<<(*i)->ram<<" "<<(*i)->monitor<<" "<<(*i)->battery<<" "<<(*i)->touch_screen<<" "<<(*i)->color<<" "<<(*i)->price <<endl;
		}
		
	}
	Save.close();
}
void database::RemoveLaptop()
{

	int item_id;
	cout << "Lutfen Silmek icin Laptop Item Id Giriniz" << endl;
	cin >> item_id;

	list<ProductPropertyLaptop*>::iterator i;
	for (i = ProductPropertyLaptopList.begin(); i != ProductPropertyLaptopList.end(); i++)
	{
		if ((*i)->item_id == item_id)
		{
			ProductPropertyLaptopList.erase(i);
			break;
		}
	}
	
	SaveLaptop();
	

}
void database::EditLaptop()
{
	LaptopListele();
	int itembul;
	cout << "Lutfen listeden duzenlenecek Urunun id numarasini secin.." << endl;
	cin >> itembul;
	if (LaptopBul(itembul) == NULL)
	{
		system("CLS");
		cout << "Duzenlemek istediginiz Laptop listede bulunmamaktadir.Lutfen Listeden yeni bir Laptop secin" << endl;
		EditLaptop();
	}

	else
	{
		list<ProductPropertyLaptop*>::iterator itr;

		
		int memory;
		int processor;
		int ram;
		int monitor;
		int battery;
		bool touch_screen;
		string color;
		int price;

		
		cout << "Duzenlemek icin Yeni bir Memory Degeri Girin" << endl;
		cin >> memory;
		cout << "Duzenlemek icin istediginiz Yeni islemci degeri girin" << endl;
		cin >> processor;
		cout << "Duzenlemek icin Yeni Ram degeri  girin" << endl;
		cin >> ram;
		cout << "Duzenlemek icin Monitor degeri girin" << endl;
		cin >> monitor;
		cout << "Duzenlemek icin Yeni Batarya degeri girin " << endl;
		cin >> battery;
		cout << "Duzenlenen cihazda dokunmatik ozelligi var mi?(1/0)" << endl;
		cin >> touch_screen;
		cout << "Duzenlemek icin yeni renk girin" << endl;
		cin >> color;
		cout << "Duzenlemek icin Yeni Laptop Bedeli Girin" << endl;
		cin >> price;

		for (itr = ProductPropertyLaptopList.begin(); itr != ProductPropertyLaptopList.end(); itr++)
		{
			if ((*itr)->item_id == itembul)
			{
				
				(*itr)->memory = memory;
				(*itr)->processor = processor;
				(*itr)->ram = ram;
				(*itr)->monitor = monitor;
				(*itr)->battery = battery;
				(*itr)->touch_screen = touch_screen;
				(*itr)->color = color;
				(*itr)->price = price;
			}
		}
	}
	SaveLaptop();
	cout << "Laptop Basariyla duzenlendi..." << endl;

}

void database::MobileIliskiKur()
{
	ifstream dosyaOku("addProductPropertyMobile.txt",ios::app);
		if (dosyaOku.is_open())
		{
	int item_id;
	int memory;
 int  processor;
 int ram;
 bool dual_sim;
 int screen;
 string color ;
 int battery;
 int mp;
	
		while (!dosyaOku.eof())
		{
			dosyaOku>> item_id >>memory >> processor >> processor >> ram >> dual_sim >> battery >> screen >> color >> battery >>mp ;

		  
			MobileBul(item_id)->product_item = ItemBul(item_id);
			ItemBul(item_id)->MobileItems = MobileBul(item_id);
		}	
		}

}
void database::MobileListele()
{
list<ProductPropertyMobile* >::iterator itr;

	for (itr=ProductPropertyMobileList.begin();itr !=ProductPropertyMobileList.end();itr++)
	{
		cout<< (*itr)->item_id<< " " << (*itr)->memory<<" "<<(*itr)->processor <<" "<<(*itr)->ram<<" "<<(*itr)->dual_sim<<" "<<(*itr)->screen<<" "<<(*itr)->color<<" "<<(*itr)->battery<<" "<<(*itr)->mp<<endl;
		
	}

}
void database::MobileDoldur()
{
	ifstream dosyaOku("addProductPropertyMobile.txt",ios::app);
		if (dosyaOku.is_open())
		{
	int item_id;
	int memory;
 int  processor;
 int ram;
 bool dual_sim;
 int screen;
 string color ;
 int battery;
 int mp;
	
		while (!dosyaOku.eof())
		{
			dosyaOku>> item_id >>memory >> processor >> ram >> dual_sim >> screen >> color >> battery >>mp ;

		  
			ProductPropertyMobileList.push_back(new ProductPropertyMobile(item_id,memory,processor,ram,dual_sim,screen,color,battery,mp));
		}	
		}
}
ProductPropertyMobile* database::MobileBul(int item_id)
{
	list<ProductPropertyMobile *>::iterator itr;

	for (itr=ProductPropertyMobileList.begin();itr !=ProductPropertyMobileList.end();itr++)
	{
		if ((*itr) ->item_id==item_id)
		{
		cout<< (*itr)->item_id<< " " << (*itr)->memory<<" "<<(*itr)->processor <<" "<<(*itr)->ram<<" "<<(*itr)->dual_sim<<" "<<(*itr)->screen<<" "<<(*itr)->color<<" "<<(*itr)->battery<<" "<<(*itr)->mp<<endl;
		return *itr;
		}
		
	}
	return NULL;
}
void database::MobileAdd()
{
	 int item_id;
	 int memory;
	 int  processor;
	 int ram;
	 bool dual_sim;
	 int screen;
	 string color ;
	 int battery;
	 int mp;
	 
	 
	cout<<"Lutfen Mobile Item Id girin:\n";
	cin>>item_id;
	cout<<"Lutfen Memory degeri girin:\n";
	cin>>memory;
	cout<<"Lutfen islemci degeri girin:\n";
	cin>>processor;
	cout<<"Lutfen Ram Degeri girin:\n";
	cin>>ram;
	cout<<" dual_sim ozelligi varmý(1/0)? :\n";
	cin>>dual_sim;
	cout<<"Lutfen Ekran boyutu girin:\n";
	cin>>screen;
	cout<<"Lutfen Battery degeri girin:\n";
	cin>>battery;
	cout<<"Lutfen Renk girin:\n";
	cin>>color;
	cout<<"Lutfen mp id girin:\n";
	cin>>mp;

	//ProductPropertyMobileList.push_back(new ProductPropertyMobile(item_id,memory,processor,ram,dual_sim,screen,color,battery,mp));

	if (MobileBul(item_id) == NULL)
	{
		system("CLS");
		ProductPropertyMobileList.push_back(new ProductPropertyMobile(item_id, memory, processor, ram, dual_sim, screen, color, battery, mp));
	}
	else
	{
		system("CLS");
		cout << "Girmis Oldugunuz Id' de zaten bir kayit var.Lutfen Yeni Degerler Giriniz..." << endl;
		MobileAdd();
	}
	
	
	
	
	
	SaveMobile();
	
}
void database::SaveMobile()
{
	ofstream Save("addProductPropertyMobile.txt");
	//int boyut=ProductCategoryList.size();
	list<ProductPropertyMobile*>::iterator i;
	//i = ProductCategoryList.begin();
	int k = ProductPropertyMobileList.size();
	for (i = ProductPropertyMobileList.begin(); i != ProductPropertyMobileList.end(); i++)
	{
		k--;
		if (k == 0)
		{
			Save <<  (*i)->item_id<< " " << (*i)->memory<<" "<<(*i)->processor <<" "<<(*i)->ram<<" "<<(*i)->dual_sim<<" "<<(*i)->screen<<" "<<(*i)->color<<" "<<(*i)->battery<<" "<<(*i)->mp;
		}
		else
		{
			Save << (*i)->item_id<< " " << (*i)->memory<<" "<<(*i)->processor <<" "<<(*i)->ram<<" "<<(*i)->dual_sim<<" "<<(*i)->screen<<" "<<(*i)->color<<" "<<(*i)->battery<<" "<<(*i)->mp<<endl;
		}
		
	}
	Save.close();
}
void database::RemoveMobile()
{
	int item_id;
	cout << "Lutfen Silmek icin Mobile Item Id Giriniz" << endl;
	cin >> item_id;

	list<ProductPropertyMobile*>::iterator i;
	for (i = ProductPropertyMobileList.begin(); i != ProductPropertyMobileList.end(); i++)
	{
		if ((*i)->item_id == item_id)
		{
			ProductPropertyMobileList.erase(i);
			break;
		}
	}
	
	SaveMobile();
	
}
void database::EditMobile() 
{
	MobileListele();
	int itembul;
	cout << "Lutfen listeden duzenlenecek Urunun id numarasini secin.." << endl;
	cin >> itembul;
	if (MobileBul(itembul) == NULL)
	{
		system("CLS");
		cout << "Duzenlemek istediginiz Mobil Cihaz listede bulunmamaktadir.Lutfen Listeden yeni bir Laptop secin" << endl;
		EditMobile();
	}

	else
	{
		list<ProductPropertyMobile*>::iterator itr;

		
		int memory;
		int  processor;
		int ram;
		bool dual_sim;
		int screen;
		string color;
		int battery;
		int mp;

		cout << "Duzenlemek icin Yeni bir Memory Degeri Girin" << endl;
		cin >> memory;
		cout << "Duzenlemek icin istediginiz Yeni islemci degeri girin" << endl;
		cin >> processor;
		cout << "Duzenlemek icin Yeni Ram degeri  girin" << endl;
		cin >> ram;
		cout << "Duzenlenecek cihazda Dual Sim ozelligi var mi ? (1/0)" << endl;
		cin >> dual_sim;
		cout << "Duzenlemek icin Yeni Ekran degeri girin " << endl;
		cin >> screen;
		cout << "Duzenlemek icin Yeni Renk girin" << endl;
		cin >> color;
		cout << "Duzenlemek icin yenibatarya degeri girin (Mah)" << endl;
		cin >> battery;
		cout << "Duzenlemek icin yeni Mp Id degeri girin " << endl;
		cin >> mp;
		

		for (itr = ProductPropertyMobileList.begin(); itr != ProductPropertyMobileList.end(); itr++)
		{
			if ((*itr)->item_id == itembul)
			{
				
				(*itr)->memory = memory;
				(*itr)->processor = processor;
				(*itr)->ram = ram;
				(*itr)->screen = screen;
				(*itr)->battery = battery;
				(*itr)->dual_sim = dual_sim;
				(*itr)->color = color;
				(*itr)->mp = mp;
			}
		}
	}
	SaveMobile();
	cout << "Mobil Cihaz Basariyla duzenlendi..." << endl;
}

void database::ShoesIliskiKur()
{
ifstream dosyaOku("addProductPropertyShoes.txt",ios::app);
		if (dosyaOku.is_open())
		{
	
	int item_id;
	string color;
	string size;
	string material;
	int heel_height;
	int price;

	
		while (!dosyaOku.eof())
		{
			dosyaOku>> item_id >>color >> size >> material >> heel_height >> price;

			ShoesBul(item_id)->product_item = ItemBul(item_id);
			ItemBul(item_id)->ShoesItems = ShoesBul(item_id);
			
		}
		
		
		
		}
}
void database::ShoesListele()
{
list<ProductPropertyShoes* >::iterator itr;

	for (itr=ProductPropertyShoesList.begin();itr !=ProductPropertyShoesList.end();itr++)
	{
		cout<< (*itr)->item_id<< " " << (*itr)->color<<" "<<(*itr)->size <<" "<<(*itr)->material<<" "<<(*itr)->heel_height<<" "<<(*itr)->price<<" "<<endl;
		
	}
}
void database::ShoesDoldur()
{
	
	ifstream dosyaOku("addProductPropertyShoes.txt",ios::app);
		if (dosyaOku.is_open())
		{
	
	int item_id;
	string color;
	string size;
	string material;
	int heel_height;
	int price;

	
		while (!dosyaOku.eof())
		{
			dosyaOku>> item_id >>color >> size >> material >> heel_height >> price;

			ProductPropertyShoesList.push_back(new ProductPropertyShoes(item_id,color,size,material,heel_height,price));
		}
		}

}
ProductPropertyShoes* database::ShoesBul(int item_id)
{
	list<ProductPropertyShoes *>::iterator itr;

	for (itr=ProductPropertyShoesList.begin();itr !=ProductPropertyShoesList.end();itr++)
	{
		if ((*itr) ->item_id==item_id)
		{
	cout<< (*itr)->item_id<< " " << (*itr)->color<<" "<<(*itr)->size <<" "<<(*itr)->material<<" "<<(*itr)->heel_height<<" "<<(*itr)->price<<" "<<endl;
		return *itr;
		}
		
	}
	return NULL;
}
void database::ShoesAdd()
{
	int item_id;
	string color;
	string size;
	string material;
	int heel_height;
	int price;


	cout<<"Llutfen Ayakkabi  Item Id girin:\n";
	cin>>item_id;
	cout<<"Lutfen Renk girin:\n";
	cin>>color;
	cout<<"Lutfen numara girin:\n";
	cin>>size;
	cout<<"Lutfen Urun meteryal cinsini giri(deri,nubuk vs..):\n";
	cin>>material;
	cout<<"Lutfen topuk uzunlugu girin:\n";
	cin>>heel_height;
	cout<<"Lutfen Urunun degerini girin:\n";
	cin>>price;

	//ProductPropertyShoesList.push_back(new ProductPropertyShoes(item_id,color,size,material,heel_height,price));


	if (ShoesBul(item_id) == NULL)
	{
		system("CLS");
		ProductPropertyShoesList.push_back(new ProductPropertyShoes(item_id, color, size, material, heel_height, price));
	}
	else
	{
		system("CLS");
		cout << "Girmis Oldugunuz Id' de zaten bir kayit var.Lutfen Yeni Degerler Giriniz..." << endl;
		ShoesAdd();
	}




	SaveShoes();
	
}
void database::SaveShoes()
{
	ofstream Save("addProductPropertyShoes.txt");
	//int boyut=ProductCategoryList.size();
	list<ProductPropertyShoes*>::iterator i;
	//i = ProductCategoryList.begin();
	int k = ProductPropertyShoesList.size();
	for (i = ProductPropertyShoesList.begin(); i != ProductPropertyShoesList.end(); i++)
	{
		k--;
		if (k == 0)
		{
			Save <<  (*i)->item_id<< " " << (*i)->color<<" "<<(*i)->size<<" "<<(*i)->material<<" "<<(*i)->heel_height<<" "<<(*i)->price;
		}
		else
		{
			 Save <<  (*i)->item_id<< " " << (*i)->color<<" "<<(*i)->size<<" "<<(*i)->material<<" "<<(*i)->heel_height<<" "<<(*i)->price<<endl;
		}
		
	}
	Save.close();
}
void database::RemoveShoes()
{
	int item_id;
	cout << "Lutfen Silmek icin Ayakkabi Item Id Giriniz" << endl;
	cin >> item_id;

	list<ProductPropertyShoes*>::iterator i;
	for (i = ProductPropertyShoesList.begin(); i != ProductPropertyShoesList.end(); i++)
	{
		if ((*i)->item_id == item_id)
		{
			ProductPropertyShoesList.erase(i);
			break;
		}
	}
	
	SaveShoes();
	
}
void database::EditShoes()
{
	ShoesListele();
	int itembul;
	cout << "Lutfen listeden duzenlenecek Ayakkabinin id numarasini secin.." << endl;
	cin >> itembul;
	if (ShoesBul(itembul) == NULL)
	{
		system("CLS");
		cout << "Duzenlemek istediginiz Ayakkabi listede bulunmamaktadir.Lutfen Listeden yeni bir Ayakkabi secin" << endl;
		EditShoes();
	}

	else
	{
		list<ProductPropertyShoes*>::iterator itr;
		
		string color;
		string size;
		string material;
		int heel_height;
		int price;

		
		cout << "Duzenlemek icin Yeni bir Renk Girin" << endl;
		cin >> color;
		cout << "Duzenlemek icin istediginiz Ayakkabinin Yeni Numarasini girin" << endl;
		cin >> size;
		cout << "Duzenlemek icin Yeni Meteryal  girin (Deri,Nubuk vs.)" << endl;
		cin >> material;
		cout << "Duzenlemek icin Topuk uzunlugunun sayisal degerini girin" << endl;
		cin >> heel_height;
		cout << "Duzenlemek icin Yeni bir Bedel  girin " << endl;
		cin >> price;
		

		for (itr = ProductPropertyShoesList.begin(); itr != ProductPropertyShoesList.end(); itr++)
		{
			if ((*itr)->item_id == itembul)
			{
				
				(*itr)->price = price;
				(*itr)->material = material;
				(*itr)->heel_height = heel_height;
				(*itr)->size = size;
				(*itr)->color = color;
				
			}
		}
	}
	SaveShoes();
	cout << "Ayakkabi Basariyla duzenlendi..." << endl;
}


database::database(void)
{
	/*text dosyadan oku databesin içindekileri listeleri doldur*/
	ProductCategoryDoldur();
	ItemDoldur();
	LaptopDoldur();
	MobileDoldur();
	ShoesDoldur();
	
	//ProductItemIliskiKur();
	/*claslarý arasý iliþkileri kursun
	
	CategoryIliskiKur();
	LaptopIliskiKur();
	MobileIliskiKur();
	ShoesIliskiKur(); */

}


database::~database(void)
{
	
}
