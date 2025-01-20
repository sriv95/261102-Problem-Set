#include <iostream>
#include <string>
using namespace std;

int main(){
    char X;
    cin>>X;
    switch (X)
    {
    case 'A':
        cout<<"Awesome";
        break;
    case 'B':
        cout<<"Great";
        break;
    case 'C':
        cout<<"Good";
        break;
    case 'F':
        cout<<"Noob";
        break;
    default:
    cout<<"Error: Invalid Input";
        break;
    }
    return 0;
}