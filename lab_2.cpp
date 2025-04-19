#include<iostream>
#include<cctype>
#include<stdexcept>
using namespace std;

int main(){
    string expr;
    cout <<"Enter a simple expression (single digit numbers, +, -, *, / only): ";
    cin >> expr;

    int result = 0;
    char lastOperator = '+';

    for (int i = 0; i < expr.length(); i++){
        char ch = expr[i];

        if(isdigit(ch)){
            int num = ch - '0';

            if(lastOperator == '+'){
                result += num;
            }
            else if(lastOperator == '-'){
                result -= num;
            }
            else if(lastOperator == '*'){
                result *= num;
            }
            else if (lastOperator == '/'){
                if(num == 0){
                    cout << "Error: Division by zero is not allowed!" << endl;
                    return 1;
                }
                result /= num;
            }
           
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            lastOperator = ch;
        }
        else{
            cout <<"Invalid Character: " << ch << endl;
            return 1;
        }
    }
    cout <<"Result = " << result << endl;
    return 0;
}