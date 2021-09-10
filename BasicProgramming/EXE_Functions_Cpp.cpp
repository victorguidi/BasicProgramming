#include <iostream>

using namespace std;

void myName(){
    
    cout << "Victor Guidi" << endl;

}

string yName(){

    char name[20];
    cin >> name;

    return name;

}

int main(){
    
    cout << "Hello world, my name is: " << endl;
    myName();

    cout << "Whats your name?" << endl;
    string name = yName();

    cout << "Nice to meet you, " << name << endl;

    return 0;
}

