#ifndef PRODUCT_H
#define PRODUCT_H


#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Product {
    private:
        string productId;
        string supllierId;
        string productName;
        string unitId;
    public:
        Product();
        Product(const string&,const string&, const string&, const string&);
        ~Product();
        const string& getProductId();
        void setProductId(const string&);
        const string& getProductName();
        void setProductName(const string&);
        const string& getSupplierId();
        void setSupplierId(const string&);
        const string& getUnitId();
        void setUnitId(const string&);

};

#endif // PRODUCT_H
