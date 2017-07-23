#include "Cclass.h"

int main()
{
    auto disk1 = std::make_shared<product> ("disks", "cd", "music", "lp", 100.85, "######"),
            disk2 = std::make_shared<product> ("disks", "dvd", "video", "xxx", 234.85, "######"),
            disk3 = std::make_shared<product> ("disks", "dvd", "software", "linux", 1234.85, "######");

    auto book1 = std::make_shared<programming> ("books", "programming", "", "c++", 165.85,
                                                                        "######", 162, "c++");

    auto book2 = std::make_shared<cooking> ("books", "cooking", "", "pies", 165.85,
                                                                "######", 50, "chees");

    auto book3 = std::make_shared<esoteric> ("books", "esoteric", "", "smth", 365.85,
                                                                  "######", 50, 22);

    catalog books;
    books.add_new_product(disk1);
    books.add_new_product(disk2);
    books.add_new_product(disk3);
    books.add_new_product(book1);
    books.add_new_product(book2);
    books.add_new_product(book3);
    books.show();

    return 0;
}