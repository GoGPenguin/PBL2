#ifndef DETAILINPUT_H
#define DETAILINPUT_H
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class DetailInput{
    private:
        string detailInputId;
        string inputId;
        string productId;
        int Count;
        int priceIn;
        int priceOut;
        int rest;
    public:
        DetailInput();
        DetailInput(const string&, const string&, const string&, int, int, int, int);
        ~DetailInput();
        const string& getDetailInputId();
        void setDetailInputId(const string&);
        const string& getInputId();
        void setInputId(const string&);
        const string& getProductId();
        void setProductId(const string&);
        const int& getCount();
        void setCount(const int&);
        const int& getPriceIn();
        void setPriceIn(const int&);
        const int& getPriceOut();
        void setPriceOut(const int&);
        const int& getRest();
        void setRest(const int&);
};

#endif // DETAILINPUT_H
