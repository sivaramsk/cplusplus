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


int isPalindrome(const string& instr, vector<int>& index) {
    int noOfChangesRequired = 0;
    for (int i = 0, j = (instr.length()-1); i < (instr.length()/2); j--, i++) {
       if (instr[i] != instr[j]) {
          index.push_back(i);
          noOfChangesRequired++;
       }
    }
    return noOfChangesRequired;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    string number;
    cin >> number;
    string lStr(number);
    vector <int> index, temp;

    int noOfChangesReq = isPalindrome(number, index);
    int noOfChanges = k;

    //cout << "NoOfChangesReq: " << noOfChangesReq << " NoOfChanges:" << noOfChanges << endl;
    if (noOfChangesReq <= k) {
        for (vector<int>::iterator it = index.begin(); it < index.end(); it++) {
            int i = *it;
            int j = ((n - 1) - *it);

            if (noOfChanges <= 0) {
                break;
            }

            if (lStr[i] != lStr[j]) {
                if (lStr[i] > lStr[j]) {
                    lStr[j] = lStr[i];
                    noOfChanges--;
                } else {
                    lStr[i] = lStr[j];
                    noOfChanges--;
                }
            }
        }

       //cout << "LStr1: " << lStr << endl; 
        // 2nd Pass
        for (int i = 0, j = (n - 1); i < (n / 2); i++, j--) { 
            if (lStr[i] != '9') {
                if(find(index.begin(), index.end(), i) != index.end()) {
                    if (noOfChanges >= 1) {
                        noOfChanges--;
                        lStr[i] = '9';
                        lStr[j] = '9';
                    }
                } else {
                    if (noOfChanges >=2) {
                        noOfChanges -= 2;
                        lStr[i] = '9';
                        lStr[j] = '9';
                    }

                }
                if (noOfChanges < 0) {
                    break;
                }
             }
        }

        //cout << "LStr 3: " << noOfChanges  << ": N/2: " << (n/2) << ":" << lStr << endl; 
        // The middle element in an odd sized string
        if (noOfChanges > 0 && (n%2 == 1)) {
            int i = (n/2);
            if (lStr[i] != '9') {
                lStr[i] = '9';
                noOfChanges--;
            }
        }
    }

   // cout << "LStr2: " << lStr << endl; 
    //cout << "No Of Changes: " << noOfChanges << endl;
    if (isPalindrome(lStr, temp) == 0)
        cout << lStr;
    else
        cout << "-1";

    return 0;
}
