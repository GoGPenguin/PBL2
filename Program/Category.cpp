#include"Category.h"


Category::Category(){};

Category::Category(const string& productTypeId,const string& Name)
{

    this->productTypeId = productTypeId;
    this->productName = Name;
}

string Category::getproductTypeId()
{
    return this->productTypeId;
}

void Category::setproductTypeId(const string& s)
{
    this->productTypeId = s;
}

string Category::getproductName()
{
    return this->productName;
}

void Category::setproductName(const string& s)
{
    this->productName = s;
}
