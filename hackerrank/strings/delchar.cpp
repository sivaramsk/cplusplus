#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string delRepeatChar(const string& str) {

    string outstr;
    for(int i = 0; i < str.length(); i++) {
        //cout << "Instr:" << instr[i] << ":" << instr[i+1] << endl;
        if (str[i] != str[i+1]) {
            outstr += str[i];
            //cout << "If: Outstr:" << outstr << endl;
        } else {
            //cout << "Else" << endl;
            i++;
            continue;
        }
    }

    return outstr;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string instr, str1, str2;
    cin >> instr;
    str1 = instr;

    while(true) {
        str2 = delRepeatChar(str1);
        if (str1.length() != str2.length())
            str1 = str2;
        else
            break;

        cout << str2.length() << ":" << str1.length() << endl;
    }

    if (!str2.empty())
        cout << "Output:" << str2 << endl;
    else
        cout << "Empty String" << endl;

    return 0;
}

