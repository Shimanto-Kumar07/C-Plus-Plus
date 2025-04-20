#include <iostream>
#include <string>
using namespace std;

bool isOnlyA(const string& s) {
    return s == "a";
}

bool isANBN(const string& s) {
    int i = 0;
    int len = s.length();

    int countA = 0, countB = 0;

    
    while (i < len && s[i] == 'a') {
        countA++;
        i++;
    }

    
    while (i < len && s[i] == 'b') {
        countB++;
        i++;
    }

    
    return (i == len)  && (countB > 0);
}

bool isExactlyABB(const string& s) {
    return s == "abb";
}

int main() {
    string input;
    cout << "Enter string: ";
    cin >> input;

    if (isOnlyA(input)) {
        cout << "String matches: a" << endl;
    } else if (isExactlyABB(input)) {
        cout << "String matches: abb" << endl;
    } else if (isANBN(input)) {
        cout << "String matches: a*b+" << endl;
    } else {
        cout << "String not match" << endl;
    }

    return 0;
}
