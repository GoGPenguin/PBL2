#include "Helper.h"

vector<string> split(const string &str, char c){
    string tmp;
    vector<string> res;

    for (size_t i = 0; i < str.size(); ++i){
        if (str[i] == c){
            res.push_back(tmp);
            tmp = "";
        }
        else tmp += str[i];
    }
    if (tmp != ""  && tmp != "\n") res.push_back(tmp);
    return res;
}

bool cmp(Input a, Input b)
{
    if(a.getYearInput(a.getDayOfInput()) > b.getYearInput(b.getDayOfInput())) return true;
    else if (a.getYearInput(a.getDayOfInput()) == b.getYearInput(b.getDayOfInput()))
    {
        if(a.getMonthInput(a.getDayOfInput()) > b.getMonthInput(b.getDayOfInput())) return true;
        else if(a.getMonthInput(a.getDayOfInput()) == b.getMonthInput(b.getDayOfInput()))
        {
            if(a.getDayInput(a.getDayOfInput()) > b.getDayInput(a.getDayOfInput())) return true;
            else return false;
        }
        return false;
    }
    return false;
}

bool cmp2(Output a, Output b)
{
    if(a.getYearOutput(a.getDayOfOutput()) > b.getYearOutput(b.getDayOfOutput())) return true;
    else if(a.getYearOutput(a.getDayOfOutput()) ==  b.getYearOutput(b.getDayOfOutput()))
    {
        if(a.getMonthOutput(a.getDayOfOutput()) > b.getMonthOutput(b.getDayOfOutput())) return true;
        else if(a.getMonthOutput(a.getDayOfOutput()) == b.getMonthOutput(b.getDayOfOutput()))
        {
            if(a.getDayOutput(a.getDayOfOutput()) > b.getDayOutput(b.getDayOfOutput())) return true;
            else return false;
        }
        return false;
    }
    return false;
}

