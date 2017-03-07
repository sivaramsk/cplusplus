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

bool compare(const int& a, const int& b) {
	return (a > b);
}


int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    vector<int> weights;
    vector<int>::iterator it;
    
    int weight = 0;
    for (int i = 0; i < s.length(); i++) {
        int j = i+1;
        weight += ((int)s[i] - 96);
        //cout << " Current Char: " << (int)s[i] << " Weight: " << weight << endl;
        weights.push_back(weight);
        if (s[i] != s[j]) {
             weight = 0;
         }
    }
    
    /* cout << "Vector Values: " << endl;
    for (it = weights.begin(); it < weights.end(); it++) {
        cout << *it << endl;
    }*/
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
       it = find (weights.begin(), weights.end(), x);
       if (it != weights.end())
           cout << "Yes" << endl;
        else
            cout << "No" << endl;
        
        
    }
    return 0;
}

