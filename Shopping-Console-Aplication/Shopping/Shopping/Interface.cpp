#include "Interface.h"




Interface::Interface(void)
{
}

void Interface::MainMenu()
{
	cout << "Ana ��lemler Ekran�" <<endl 
		<< "1 - Listeleme men�s�" << endl 		
		<< "2 - Arama alt men�s�" << endl
		<< "3 - Ekleme Bul" << endl		
		<< "4 - Kaydet" << endl
		<< "5 - Sil" << endl
		<< "0 - ��k��" << endl
		<< "-------------------" << endl
		<< "Yukar�daki harflerden birini giriniz!" << endl;

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
			
			//cout<< "Ba�ar�yla kaydedildi."<<endl;
			break;
		case '5':			
			
			//cout<< "Ba�ar�yla silindi."<<endl;
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
