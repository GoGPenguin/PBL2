#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Unit{
    private: 
        string unitId;
        string unitName;
    public: 
        Unit();
        ~Unit();
        const string& getUnitId();
        void setUnitId(const string&);
        const string& getUnitName();
        void setUnitName(const string&);
        void unitShow();
};