#ifndef INPUT_H
#define INPUT_H

#include <bits/stdc++.h>
using namespace std;

class Input{
    private:
        string inputId;
        string dayOfInput;
    public:
        Input();
        Input(const string&, const string&);
        ~Input();
        const string& getInputId();
        void setInputId(const string&);
        const string& getDayOfInput();
        void setDayOfInput(const string&);
        string getDayInput(string s);
        string getMonthInput(string s);
        string getYearInput(string s);

};

#endif // INPUT_H
