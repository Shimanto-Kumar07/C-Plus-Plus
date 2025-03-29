#include <iostream>
using namespace std;

int main(){
    int a, b, temp;

    cout <<"Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    //swap

    temp = a;
    a = b;
    b = temp;

    cout <<"After Swapping the number is " << a << " & " << b << ".";
}