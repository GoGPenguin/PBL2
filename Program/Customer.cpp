#include <bits/stdc++.h>
#include"Customer.h"

using namespace std;

Customer::Customer(){};

Customer::Customer(const string& id,const string &name, const string &address, const string &phoneNumber) {

    this->id = id;
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

void Customer::setId(const string& s)
{
    this->id = s;
}

string Customer::getId()
{
    return this->id;
}

void Customer::setName(const string& s)
{
    this->name = s;
}

string Customer::getName()
{
    return this->name;
}

void Customer::setAddress(const string& s)
{
    this->address = s;
}

string Customer::getAddress()
{
    return this->address;
}

void Customer::setPhoneNumber(const string& s)
{
    this->phoneNumber = s;
}

string Customer::getPhoneNumber()
{
    return this->phoneNumber;
}
