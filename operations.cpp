#include <iostream>
using namespace std;

int main(){
    int num1 = 6, num2 = 3;

    //Arithmatic Operator
    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;
    cout << num1 % num2 << endl;

    cout << endl;

    //Relational Operator
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 >= num2) << endl;

    cout << endl;

    //Assignment Operator
    num1 += 3;
    cout << num1 << endl;
    num2 -= 2;
    cout << num2 << endl;


    return 0;
}