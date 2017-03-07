#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0;
    cin >> n;
    vector<string> s;
    
    for (int i = 0; i < n; i++){
        string t;
        cin >> t;
        s.push_back(t);
    }
    
    for (int i = 0; i < n; i++) {
        int noOfDeletes = 0;
        char lastEnteredChar = '\0';
        string &t = s[i];
        for (int j = 0; j < t.length(); j++) {
         if (lastEnteredChar != t[j]) {
           lastEnteredChar = t[j];
         } else {
             noOfDeletes++;
         }
        } 
       cout << noOfDeletes << endl;
    }
    return 0;
}
