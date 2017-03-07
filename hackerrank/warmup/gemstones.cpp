#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<string> gem;
    vector<string>::iterator it;
    map<char, int> elements_map;
    typedef map<char, int>::iterator    elements_iterator;
    int n = 0, gem_count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        gem.push_back(temp);
    }

    for (it=gem.begin(); it < gem.end(); it++) {
        string s(*it);
        map<char, int> temp_map;
        for (int i = 0; i < s.length(); i++) {
            int c = (int)s[i];
            if (temp_map[(char)c] != 100) {
                temp_map[(char)c] = 100;
                int & t = elements_map[(char)c];
                int count = t;
                elements_map[(char)c] = count+1;
                //cout << "Char: " << (char)c << ": " << elements_map[(char)c] << ":" << count << endl;
            }

        }
    }

	for (elements_iterator e = elements_map.begin(); e != elements_map.end(); e++) {
        //std::cout << e->first << " == " << e->second << std::endl;
        if (e->second == n)
            gem_count++;
	}
    cout << gem_count;
    return 0;
}
