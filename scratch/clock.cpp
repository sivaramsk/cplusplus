#include <string.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<string, int> clockList;

void setClock(string cInputs) {
    char clock[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int i = 0;
    int currentIndex = 5;
    string retString;

    for(i = 0; i < cInputs.size(); i++) {
        if (cInputs[i] == 'P') {
            currentIndex += 1;
        } else if (cInputs[i] == 'N') {
            currentIndex += 5;
        } else if (cInputs[i] == 'D') {
            currentIndex += 10;
        }

        currentIndex %= 12;

        if (clock[currentIndex] == 0)
            clock[currentIndex] = cInputs[i];
        else
            break;

    }

    if (i == 12)
    {
        int numEntries = clockList.count(clock);
        clockList.insert(std::pair<string, int>(clock, ++numEntries));
        //cout << "Clock Values:" << clock << endl;
    }

}

void swap(char *a, char* b) {
    char t;
    t = *a;
    *a = *b;
    *b = t;
}

void permute(char *a, int l, int r) {
    int i = 0; 
    if (l == r) {
        //cout << a << endl;
        setClock(a);
    } else {
        for( i = l; i <= r; i++) {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i));
        };
    }
}


int main() {
    char cInput[] = "PPPPNNNNDDDD";
    int n = strlen(cInput);
    permute(cInput, 0, n-1);

    std::map<string,int>::iterator it; 

    for (it = clockList.begin(); it != clockList.end(); ++it) {
            std::cout << it->first << " => " << it->second << '\n';
    }

}
