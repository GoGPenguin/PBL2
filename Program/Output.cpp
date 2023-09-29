#include "Output.h"

Output::Output()
{

}

Output::Output(const string& outputId, const string& dayofOutput)
{
    this->outputId = outputId;
    this->dayofOutput = dayofOutput;
}


Output::~Output()
{

}

const string& Output::getOutputId()
{
    return this->outputId;
}
void Output::setOutputId(const string& s)
{
    this->outputId = s;
}

const string& Output::getDayOfOutput()
{
    return this->dayofOutput;
}
void Output::setDayOfOutput(const string& s)
{
    this->dayofOutput = s;
}

string Output::getDayOutput(string s)
{
    string x;
    for(int i = 0; i <= 1; i++)
    {
        x = x + s[i];
    }
    return x;
}

string Output::getMonthOutput(string s)
{
    string x;
    for(int i = 3; i <= 4; i++)
    {
        x = x + s[i];
    }
    return x;
}

string Output::getYearOutput(string s)
{
    string x;
    for(int i = 6; i <= 9; i++)
    {
        x = x + s[i];
    }
    return x;
}

