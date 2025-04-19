#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if(age < 12){
        cout << "You are a Child.";
    }

    else if(age > 18 && age < 60
    ){
        cout << "Congrats. You are an Adult.";
    }
    else if(age >= 60){
        cout << "Prepare to Die. Your time is up. Your an old man.";
    }
    else{
        cout << "You are a Teenager.";
    }

    return 0;
}