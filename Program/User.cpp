#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "User.h"
using namespace std;


User::User(){

}

User::User(const string &userId, const string &nameOfUser, const string &roleId, const string &userName, const string &password){
    this->userId = userId;
    this->nameOfUser = nameOfUser;
    this->roleId = roleId;
    this->userName = userName;
    this->password = password;
}

User::~User(){

}

const string& User::getUserId(){
    return this->userId;
}

void User::setUserId(const string& userId){
    this->userId = userId;
}

const string& User::getNameOfUser(){
    return this->nameOfUser;
}

void User::setNameOfUser(const string& nameOfUser){
    this->nameOfUser = nameOfUser;
}

const string& User::getRoleId(){
    return this->roleId;
}

void User::setRoleId(const string& roleId){
    this->roleId = roleId;
}

const string& User::getUserName(){
    return this->userName;
}

void User::setUserName(const string& userName){
    this->userName = userName;
}

const string& User::getPassword(){
    return this->password;
}

void User::setPassword(const string& password){
    this->password = password;
}

void User::userShow(){
    cout << setfill(char(' ')) << setw(10) << "" << "|" << setfill(char(' ')) 
    << setw(8) << left << this->userId << "|"
    << setw(24) << left << this->nameOfUser << "|" 
    << setw(20) << left << this->roleId << "|"
    << setw(20) << left << this->userName << "|"
    << setw(16) << left << this->password << "|" << "\n";
}

void User::operator=(const User& user){
    this->userId = user.userId;
    this->userName = user.userName;
    this->nameOfUser = user.nameOfUser;
    this->roleId = user.roleId;
    this->password = user.password;
}

