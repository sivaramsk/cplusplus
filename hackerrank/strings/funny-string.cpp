#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getDiff(const char& a, const char& b) {
    int aC = (int) a;
    int bC = (int) b;
    
    if (aC >= bC) 
        return (aC - bC);
    else
        return (bC - aC);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n = 0;
    vector<string> s; 
    vector<string>::iterator it;
   
    cin >> n;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    
    for (it = s.begin(); it < s.end(); it++) {
        bool funny = true;
        
        string str(*it);
        string r(str.rbegin(), str.rend());
        for (int i = 0; i < str.length()-1; i++){
         if(getDiff(str[i], str[i+1]) != getDiff(r[i], r[i+1])) {
            funny = false;
            break;
          }
        }
        if (funny) 
            cout << "Funny" << endl;
        else
            cout << "Not Funny" << endl;   
    } 
    return 0;
}
