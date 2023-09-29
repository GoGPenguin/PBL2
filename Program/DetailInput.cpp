#include "DetailInput.h"


DetailInput :: DetailInput(){

}

DetailInput::DetailInput(const string& detailInputId, const string& inputId, const string& productId, int Count, int priceIn, int priceOut, int rest)
{
    this->detailInputId = detailInputId;
    this->inputId = inputId;
    this->productId = productId;
    this->Count = Count;
    this->priceIn = priceIn;
    this->priceOut = priceOut;
    this->rest = rest;
}
DetailInput :: ~DetailInput(){

}

const int& DetailInput :: getRest(){
    return this->rest;
}

void DetailInput :: setRest(const int& rest){
    this->rest = rest;
}

const string& DetailInput :: getDetailInputId(){
    return this -> detailInputId;
}
void DetailInput::setDetailInputId(const string& detailInputId){
    this->detailInputId = detailInputId;
}

const string& DetailInput :: getInputId(){
    return this -> inputId;
}
void DetailInput::setInputId(const string& inputId){
    this->inputId = inputId;
}

void DetailInput::setProductId(const string& productId){
    this->productId = productId;
}
const string& DetailInput :: getProductId(){
    return this -> productId;
}

void DetailInput::setCount(const int& Count){
    this->Count = Count;
}
const int& DetailInput :: getCount(){
    return this -> Count;
}

void DetailInput :: setPriceIn(const int& priceIn){
    this->priceIn = priceIn;
}
const int& DetailInput :: getPriceIn(){
    return this->priceIn;
}

void DetailInput :: setPriceOut(const int& priceOut){
    this->priceOut = priceOut;
}
const int& DetailInput :: getPriceOut(){
    return this->priceOut;
}


