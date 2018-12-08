#include "Cclass.h"

void catalog :: show()
{
    for(int i = 0; i < products.size(); i++)
        products[i]->show();
}