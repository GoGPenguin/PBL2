#include "Product.h"
using namespace std;

//Hàm dựng Sản phẩm
Product :: Product(){

}

Product::Product(const string& productId,const string& supllierId, const string& productName, const string& unitId)
{


    this->productId = productId;
    this->supllierId = supllierId;
    this->productName = productName;
    this->unitId = unitId;
}

//Hàm huỷ Nhà cung cấp
Product :: ~Product(){

}



const string& Product::getProductId(){
    return this->productId;
}

void Product::setProductId(const string& productId){
    this->productId = productId;
}

const string& Product::getProductName(){
    return this->productName;
}

void Product::setProductName(const string& productName){
    this->productName = productName;
}

const string& Product::getSupplierId(){
    return this->supllierId;
}

void Product::setSupplierId (const string& supplierId){
    this->supllierId = supllierId;
}

const string& Product::getUnitId()
{
    return this->unitId;

}
void Product::setUnitId(const string& unitId)
{
    this->unitId = unitId;
}
