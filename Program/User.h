#include <bits/stdc++.h>
using namespace std;

class User{
    private:
        string userId;
        string nameOfUser;
        string roleId;
        string userName;
        string password;
    public:
        User();
        User(const string&, const string&, const string&, const string&, const string&);
        ~User();
        const string& getUserId();
        void setUserId(const string&);
        const string& getNameOfUser();
        void setNameOfUser(const string&);
        const string& getRoleId();
        void setRoleId(const string&);
        const string& getUserName();
        void setUserName(const string&);
        const string& getPassword();
        void setPassword(const string&);
        void operator=(const User&);
        void userShow();
};