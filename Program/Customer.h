#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Customer{


private:
    string id;
    string name;
    string address;
    string phoneNumber;



public:
    Customer();
    Customer(const string& id,const string &name, const string &address, const string &phoneNumber);

    void setId(const string&);
    string getId();

    void setName(const string&);
    string getName();

    void setAddress(const string&);
    string getAddress();

    void setPhoneNumber(const string&);
    string getPhoneNumber();
};

#endif // CUSTOMER_H_
