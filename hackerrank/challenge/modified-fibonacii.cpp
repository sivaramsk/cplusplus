#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Integer {

    private:
        vector<int> digits;

    public:
        int getLength();
        void printDigits();
        Integer();
        Integer(int value);
        Integer(const Integer& value);

        Integer& operator+(const Integer& other);
        Integer& operator*(const Integer& other);

};

/*
 * Assigning values like 10 or 01 to the vector
 *
 */

Integer& Integer::operator+(const Integer& other) {
    int carry = 0;
    vector<int> result;
    vector<int>& dgt = this->digits;
    int dgtSize = this->digits.size();
    int otherSize = other.digits.size();

    if (dgtSize >= otherSize) {
        for(int i = 0; i < dgtSize; i++) {
            if (i <= otherSize) {
                int val = dgt[i] + other.digits[i] + carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);

            } else {
                int val = dgt[i] + carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);
            }
        }
    } else if (dgtSize < otherSize) {
        for(int i = 0; i < otherSize; i++) {
            if (i < dgtSize) {
                int val = dgt[i] + other.digits[i] + carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);

            } else {
                int val = other.digits[i] + carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);
            }
        }
    }

    this->digits = result;

    return *this;
}

Integer& Integer::operator*(const Integer& other) {
    int carry = 0;
    vector<int> result;
    vector<int>& dgt = this->digits;
    int dgtSize = this->digits.size();
    int otherSize = other.digits.size();

    if (dgtSize >= otherSize) {
        for(int i = 0; i < dgtSize; i++) {
            if (i <= otherSize) {
                int val = dgt[i] * other.digits[i] * carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);

            } else {
                int val = dgt[i] * carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);
            }
        }
    } else if (dgtSize < otherSize) {
        for(int i = 0; i < otherSize; i++) {
            if (i < dgtSize) {
                int val = dgt[i] * other.digits[i] * carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);

            } else {
                int val = other.digits[i] * carry;
                int digit = val % 10;
                if (val > 10) {
                    carry = val / 10;
                }

                result.push_back(val);
            }
        }
    }

    this->digits = result;

    return *this;
}


Integer::Integer() {
}

Integer::Integer(const int value) {
    int tempVal = value;
    int modval = 0, divval = 0;

    do {
        modval = tempVal % 10;
        divval = tempVal / 10;
        tempVal = divval;
        digits.push_back(modval);
    }while(divval >= 1);
}

Integer::Integer(const Integer& value) {
    digits = value.digits;
}

int Integer::getLength() {
    return digits.size();
}

void Integer::printDigits() {
    for(int i = getLength()-1; i >= 0; i--) {
        cout << this->digits[i];
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Integer a(15200);
    a.printDigits();
    Integer b(a);
    b.printDigits();


    return 0;
}
