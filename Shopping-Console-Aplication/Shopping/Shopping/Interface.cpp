#include "Interface.h"




Interface::Interface(void)
{
}

void Interface::MainMenu()
{
	cout << "Ana Ýþlemler Ekraný" <<endl 
		<< "1 - Listeleme menüsü" << endl 		
		<< "2 - Arama alt menüsü" << endl
		<< "3 - Ekleme Bul" << endl		
		<< "4 - Kaydet" << endl
		<< "5 - Sil" << endl
		<< "0 - Çýkýþ" << endl
		<< "-------------------" << endl
		<< "Yukarýdaki harflerden birini giriniz!" << endl;

	int secilenislem;
	cin>>secilenislem;

	switch (secilenislem)
		{
		case '1':
			
			break;
		case '2':
			
			break;
		case '3':
			
			break;		
		case '4':			
			
			//cout<< "Baþarýyla kaydedildi."<<endl;
			break;
		case '5':			
			
			//cout<< "Baþarýyla silindi."<<endl;
			break;
		case '0':
			exit(0);
			break;
		default:
			break;
		}
		system("CLS");
}

Interface::~Interface(void)
{
}
