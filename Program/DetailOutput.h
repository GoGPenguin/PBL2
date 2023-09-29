#ifndef DETAILOUTPUT_H
#define DETAILOUTPUT_H
#include<bits/stdc++.h>
using namespace std;

class DetailOutput
{
private:
    string detailOutputId;
    string OutputId;
    string productId;
    string detailInputId;
    string CustomerId;
    int Count;
public:
    DetailOutput();
    DetailOutput(const string& detailOutputId,const string& OutputId,const string& productId,const string& detailInputId,const string& CustomerId, int Count);
    ~DetailOutput();

    const string& getDetailOutputId();
    void setDetailOutputId(const string& s);

    const string& getOutputId();
    void setOutputId(const string& s);

    const string& getProductId();
    void setProductId(const string& s);

    const string& getDetailInputId();
    void setDetailInputId(const string& s);

    const string& getCustomerId();
    void setCustomerId(const string& s);

    int getCount();
    void setCount(int x);


};

#endif // DETAILOUTPUT_H
