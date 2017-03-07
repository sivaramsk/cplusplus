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


int main(){
    int n;
    cin >> n;
    string B;
    cin >> B;
    
    int count = 0;
    size_t pos = 0;
    while ((pos=B.find("010", pos)) != string::npos) {
       string t = B.substr(pos+3, 2);
       if (t == "10") {
         //B[pos+2] = '1';
         count++;
         pos += 4;
       }
        else {
           //B[pos] = '1';
           count++;
           pos += 2;
        }
    }
    cout << count; 
   
}

