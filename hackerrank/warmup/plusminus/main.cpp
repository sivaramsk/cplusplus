#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

typedef numeric_limits< double > dbl;

int main(){
    int n, pc = 0, nc = 0, zc = 0; 
    double pe = 0.0, ne = 0.0, ze = 0.0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
   if (arr[arr_i] > 0)
		pc++;
	   else if (arr[arr_i] < 0)
        nc++;
       else
		zc++;

    }
   cout << pc << ":" << nc << ":" << zc << "\n";
   cout.precision(dbl::digits10);
   double d = 3 / (double)6;
   cout << fixed << d << endl;
    return 0;
}
