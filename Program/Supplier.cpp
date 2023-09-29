#include "Supplier.h"
using namespace std;

    //Hàm dựng Nhà cung cấp
    Supplier :: Supplier(){

    }

    //Hàm huỷ Nhà cung cấp
    Supplier :: ~Supplier(){

    }
    Supplier::Supplier(const string& supplierId, const string& supplierName, const string& supplierAddress, const string& supplierPhoneNumber)
    {
        this->supplierId = supplierId;
        this->supplierName = supplierName;
        this->supplierAddress = supplierAddress;
        this->supplierPhoneNumber = supplierPhoneNumber;
    }
    //Getter Setter Mã nhà cung cấp
    const string& Supplier :: getSupplierId(){
        return this -> supplierId;
    }
    void Supplier::setSupplierId(const string& supplierId){
        this->supplierId = supplierId;
    }

    //Getter Setter Tên nhà cung cấp
    const string& Supplier :: getSupplierName(){
        return this -> supplierName;
    }
    void Supplier::setSupplierName(const string& supplierName){
        this->supplierName = supplierName;
    }

    //Getter Setter Địa chỉ nhà cung cấp
    void Supplier::setSupplierAddress(const string& supplierAddress){
        this->supplierAddress = supplierAddress;
    }
    const string& Supplier :: getSupplierAddress(){
        return this -> supplierAddress;
    }

    //Getter Settter SĐT nhà cung cấp
    void Supplier::setSupplierPhoneNumber(const string& supplierPhoneNumber){
        this->supplierPhoneNumber = supplierPhoneNumber;
    }
    const string& Supplier :: getSupplierPhoneNumber(){
        return this -> supplierPhoneNumber;
    }

