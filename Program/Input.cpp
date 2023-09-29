#include "Input.h"


Input :: Input(){

}

Input :: ~Input(){

}

Input::Input(const string& inputId, const string& dayOfInput)
{
    this->inputId = inputId;
    this->dayOfInput = dayOfInput;
}

const string& Input :: getInputId(){
    return this->inputId;
}

void Input :: setInputId (const string& inputId){
    this->inputId = inputId;
}

const string& Input :: getDayOfInput(){
    return this->dayOfInput;
}

void Input :: setDayOfInput (const string& dayOfInput){
    this->dayOfInput = dayOfInput;
}

string Input::getDayInput(string s)
{
    string x;
    for(int i = 0; i <= 1; i++)
    {
        x = x + s[i];
    }
    return x;
}

string Input::getMonthInput(string s)
{
    string x;
    for(int i = 3; i <= 4; i++)
    {
        x = x + s[i];
    }
    return x;
}

string Input::getYearInput(string s)
{
    string x;
    for(int i = 6; i <= 9; i++)
    {
        x = x + s[i];
    }
    return x;
}
