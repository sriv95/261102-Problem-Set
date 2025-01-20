#include <iostream>
using namespace std;

char arr[]={'A','E','I','O','U','a','e','i','o','u'};

char func(char x){
    int i=0;
    while (arr[i])
    {
        if (x==arr[i])
        {
            return 'y';
        }
        i++;
    }
    return 'n';
}

int main(){
    cout<<"'A' : "<<func('A')<<endl;
    cout<<"'a' : "<<func('a')<<endl;
    cout<<"'B' : "<<func('B')<<endl;
    cout<<"'z' : "<<func('z')<<endl;
    cout<<"'6' : "<<func('6')<<endl;
    cout<<"'U' : "<<func('U')<<endl;
    cout<<"'i' : "<<func('i')<<endl;
    return 0;
}