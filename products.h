#pragma once

#include "stdafx.h"

// making classes
class product
{
protected:
    std::string _category;
    std::string _subcategory;
    std::string _sub_subcategory;

    std::string _name;
    double _price;
    std::string _barcode;
public:
    product(const std::string& category, const std::string& subcategory, const std::string& sub_subcategory,
            const std::string& name, double price, const std::string& barcode) :
            _category(category),
            _subcategory(subcategory),
            _sub_subcategory(sub_subcategory),
            _name(name),
            _price(price),
            _barcode(barcode)
    {}
    virtual void show();
};

class books : public product
{
protected:
    int _number_of_pages;
public:
    books(const std::string& category, const std::string& subcategory, const std::string& sub_subcategory,
            const std::string& name, double price, const std::string& barcode, int number_of_pages) :
            product(category, subcategory, sub_subcategory, name, price, barcode),
            _number_of_pages(number_of_pages)
    {}
};

class programming : public books
{
    std::string _language_of_programming;
public:
    programming(const std::string& category, const std::string& subcategory, const std::string& sub_subcategory,
          const std::string& name, double price, const std::string& barcode, int number_of_pages,
                const std::string& language_of_programming) :
            books(category, subcategory, sub_subcategory, name, price, barcode, number_of_pages),
            _language_of_programming(language_of_programming)
    {}
    void show();
};

class cooking : public books
{
    std::string _main_ingradient;
public:
    cooking(const std::string& category, const std::string& subcategory, const std::string& sub_subcategory,
                const std::string& name, double price, const std::string& barcode, int number_of_pages,
                const std::string& main_ingradient) :
            books(category, subcategory, sub_subcategory, name, price, barcode, number_of_pages),
            _main_ingradient(main_ingradient)
    {}
    void show();
};

class esoteric : public books
{
    int _min_age;
public:
    esoteric(const std::string& category, const std::string& subcategory, const std::string& sub_subcategory,
            const std::string& name, double price, const std::string& barcode, int number_of_pages, int min_age) :
            books(category, subcategory, sub_subcategory, name, price, barcode, number_of_pages),
            _min_age(min_age)
    {}
    void show();
};
