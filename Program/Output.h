#ifndef OUTPUT_H
#define OUTPUT_H
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Output
{
private:
    string outputId;
    string dayofOutput;
public:
    Output();
    ~Output();
    Output(const string&, const string&);

    const string& getOutputId();
    void setOutputId(const string&);

    const string& getDayOfOutput();
    void setDayOfOutput(const string&);

    string getDayOutput(string s);
    string getMonthOutput(string s);
    string getYearOutput(string s);

};

#endif // OUTPUT_H
