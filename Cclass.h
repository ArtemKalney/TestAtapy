#pragma once

#include "products.h"

class catalog
{
    std::vector<std::shared_ptr<product>> products;
public:
    template <class T>
    void add_new_product(std::shared_ptr<T> item);
    void show();
};

template <class T>
void catalog :: add_new_product(std::shared_ptr<T> item)
{
    products.push_back(item);
}

void catalog :: show()
{
    for(int i = 0; i < products.size(); i++)
        products[i]->show();
}