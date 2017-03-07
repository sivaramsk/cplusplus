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
        if (pattern[i] != a && pattern[i] != b)
            outstr += pattern[i];
    }
    
    return outstr;
}

bool chkAlternatePattern(const string& pattern) {
    for (int i = 0; i < pattern.length(); i++) {
        if (pattern[i] == pattern[i+1])
            return false;
    }
    return true;
}

int main(){
    int len;
    cin >> len;
    string s;
    cin >> s;
    string uniqueStr;
    
    uniqueStr = getUniqueChars(s);
    
    if
    
    
    return 0;
}
