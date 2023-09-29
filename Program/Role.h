#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "QuanLy.h"
#include "User.h"
#include "Utilities.h"

using namespace std;

class Role{
    public:
        QuanLy p;
        vector <User> userData;
    public:
        Role();
        ~Role();
        //checkValid
        bool checkUserId(const string&);
        bool checkInt(const string&);
        
        void addUser();
        int existUser(const string&);
        void setUser();
        void removeUser();
        void sortUserByRole();
        void listUser();
        int login();
        void manaLogin();
        void run();

};