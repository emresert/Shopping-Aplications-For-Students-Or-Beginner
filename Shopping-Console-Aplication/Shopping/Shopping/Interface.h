#include "database.h"
#include "ProductCategory.h"
#include "ProductItem.h"
#include "ProductPropertyLaptop.h"
#include "ProductPropertyMobile.h"
#include "ProductPropertyShoes.h"
#include <string>
#include <fstream>
#include <list>
using namespace std;



class Interface
{
public:



	void MainMenu();

	Interface(void);
	~Interface(void);
};

