#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, output;
    cout << "Enter a string: ";
    getline(cin, input);

    bool spaceFound = false;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            output += input[i];
            spaceFound = false;
        } else {
            if (!spaceFound) {
                output += ' ';
                spaceFound = true;
            }
        }
    }

    while (output.length() > 0 && output[0] == ' ')
        output.erase(0, 1);

    while (output.length() > 0 && output[output.length() - 1] == ' ')
        output.erase(output.length() - 1, 1);

    cout << "Cleaned string: \"" << output << "\"" << endl;

    return 0;
}
