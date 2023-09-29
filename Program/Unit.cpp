#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Unit.h"
using namespace std;

Unit::Unit(){

}

Unit::~Unit(){

}

const string& Unit::getUnitId(){
    return this->unitId;
}

void Unit::setUnitId(const string& unitId){
    this->unitId = unitId;
}

const string& Unit::getUnitName(){
    return this->unitName;
}

void Unit::setUnitName(const string& unitName){
    this->unitName = unitName;
}



