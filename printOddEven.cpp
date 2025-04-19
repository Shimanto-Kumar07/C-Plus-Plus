#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0){
        cout <<"Number " << num << " is Even." << endl;
    }
    else{
        cout << "Number " << num << " is Odd." << endl;
    }

    return 0;
}