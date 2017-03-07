#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string getUniqueChars(const string& instr) {
    string outstr;
    for(int i = 0; i < instr.length(); i++) {
        if (instr[i] != instr[i+1]) {
            outstr += instr[i];
        } else {
            continue;
        }
    }

    return outstr;

}

string deleteCharsInPattern(const string& pattern, char& a, char& b) {
    string outstr;
    for (int i = 0; i < pattern.length(); i++) {
        if (pattern[i] == a || pattern[i] == b)
            outstr += pattern[i];
    }
    //cout << "Pattern: " << pattern << " A: " << a << " B: " << b << " RetStr: " << outstr << endl;
    return outstr;
}

bool chkAlternatePattern(const string& pattern) {
    for (int i = 0; i < pattern.length(); i++) {
        if (pattern[i] == pattern[i+1])
            return false;
    }
    return true;
}

bool compareLen(const std::string& a, const std::string& b)
{
    return (a.size() > b.size()); 
}

int main(){
    int len;
    cin >> len;
    string s;
    cin >> s;
    string uniqueStr;
    int longest = 0;

    uniqueStr = getUniqueChars(s);
    //cout << "UniqueStr: " << uniqueStr << endl;
    for (int i = 0; i < uniqueStr.length(); i++) {
       char a = uniqueStr[i];
       char b = uniqueStr[i+1];
       if (b == '\0')
           break;
       string temp = deleteCharsInPattern(s, a, b);
       //cout << "Temp: " << temp << endl;
       if (chkAlternatePattern(temp)) {
           if (temp.length() > longest)
            longest = temp.length();
       }
    }

    cout << longest;

    return 0;
}
