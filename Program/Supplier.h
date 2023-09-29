#ifndef SUPPLIER_H
#define SUPPLIER_H
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Supplier {
    private:
        string supplierId;
        string supplierName;
        string supplierAddress;
        string supplierPhoneNumber;
    public:
        Supplier();
        Supplier(const string&, const string&, const string&, const string&);
        ~Supplier();

        const string& getSupplierId();
        void setSupplierId(const string&);

        const string& getSupplierName();
        void setSupplierName(const string&);

        const string& getSupplierAddress();
        void setSupplierAddress(const string&);

        const string& getSupplierPhoneNumber();
        void setSupplierPhoneNumber(const string&);

};


#endif // SUPPLIER_H
