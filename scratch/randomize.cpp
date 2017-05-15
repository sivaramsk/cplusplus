#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    char arr[12] = {'P', 'P', 'P', 'P', 'N', 'N', 'N', 'N', 'D', 'D', 'D', 'D'};

    random_shuffle(&arr[0], &arr[11]);

    for(int i = 0; i < 12; i++) {
        cout << "Arr Val: " << arr[i] << endl;
    }
}
