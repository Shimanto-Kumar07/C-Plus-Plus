#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream input("input.cpp");

    string line;

    while(getline(input, line)){
        size_t pos = line.find("//");

        if(pos != string::npos){
            string comment = line.substr(pos);
            cout << comment <<endl;
        }
    }

    input.close();

    return 0;
}
