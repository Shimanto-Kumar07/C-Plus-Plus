#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
    string input;
    int countDigit = 0, countLetter = 0, countWord = 0, countSpecialCharacter = 0;

    cout <<"Enter a String: ";
    getline(cin, input);

    bool inWord = false;

    for (char ch : input){
        if(isdigit(ch)){
            countDigit++;
        }
        else if(isalpha(ch)){
            countLetter++;
        }
        else if(isspace(ch)){
            inWord = true;
        }
        else{
            countSpecialCharacter++;
        }
        if(! isspace(ch) && !inWord){
            countWord++;
            inWord = true;
        }
        else if(isspace(ch)){
            inWord = false;
        }
    }
    cout << "\nTotal Letters: " << countLetter << endl;
    cout << "Total Digits: " << countDigit << endl;
    cout << "Total Special Character: " << countSpecialCharacter << endl;
    cout << "Total Words: " << countWord << endl;

    return 0;
}