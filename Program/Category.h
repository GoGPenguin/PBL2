#ifndef CATEGORY_H_
#define CATEGORY_H_

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Category
{
private:
    string productTypeId;
    string productName;
    static int cntCat;

public:
    Category();
    Category(const string&, const string&);
    string getproductTypeId();
    void setproductTypeId(const string&);

    string getproductName();
    void setproductName(const string&);
};

#endif
