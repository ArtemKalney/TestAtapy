#include "products.h"

void product:: show()
{
    std::cout<<"category: "<<_category<<", subcategory: "<<_subcategory<<", sub_subcategory: "<<_sub_subcategory
             <<", name: "<<_name<<", price: "<<_price<<", barcode: "<< _barcode<<std::endl;
}

void programming:: show()
{
    std::cout<<"category: "<<_category<<", subcategory: "<<_subcategory <<", name: "<< _name<< ", price: "
             << _price<<", barcode: "<< _barcode<<", number_of_pages: "<<_number_of_pages
             <<", language_of_programming: " <<_language_of_programming<<std::endl;
}

void cooking:: show()
{
    std::cout<<"category: "<<_category<<", subcategory: "<<_subcategory <<", name: "<< _name<<", price: "
             <<_price<<", barcode: "<< _barcode<<", number_of_pages: "<<_number_of_pages
             <<", main_ingradient: " <<_main_ingradient<<std::endl;
}

void esoteric:: show()
{
    std::cout<<"category: "<<_category<<", subcategory: "<<_subcategory <<", name: "<< _name <<", price: "
             << _price<<", barcode: "<< _barcode<<", number_of_pages: "<<_number_of_pages
             <<", min_age: "<<_min_age<<std::endl;
}
