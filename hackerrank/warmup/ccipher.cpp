#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, outstr;
    cin >> s;
    int k;
    cin >> k;
    
    k = k%26;
    cout << "Key: " << k << endl;
    
    for (int i = 0; i < s.length(); i++) {
        int c = (int) s[i];
        cout << "Before encryption: " << (int)c << " K:" << k << endl;
        if (s[i] >= 97 && s[i] <= 122) {
            c += k;
            cout << " After encryption 1: " << (int)c << endl;
            if (c > 122)
              c -= 26;
            
            cout << " After encryption 2: " << (int)c << endl;
        } else if (s[i] >= 65 && s[i] <= 90) {
            c += k;
            cout << " After encryption 3: " << (int)c << endl;
            if (c > 90)
               c -= 26;
            
            cout << " After encryption 4: " << (int)c << endl;
        }
            
        outstr += (char) c;
    }
    
    cout << outstr;
    return 0;
}

