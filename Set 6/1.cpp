#include <iostream>
#include <string>
using namespace std;

string func(string str){
    int x=0,y=0,i=0;
    while (str[i])
    {
        if (str[i]=='X') x++;
        else y++;
        i++;
    }
    if (x>y) return "1";
    else if (y>x) return "-1";
    else return "0";
}

int main(){
    cout<<"XYXXYX : "<<func("XYXXYX")<<endl;
    cout<<"XXYY : "<<func("XXYY")<<endl;
    cout<<"XYYYYY : "<<func("XYYYYY")<<endl;
    cout<<"XYXY : "<<func("XYXY")<<endl;
    cout<<"XXXXXYYYY : "<<func("XXXXXYYYY")<<endl;
    cout<<"Y : "<<func("Y")<<endl;
    return 0;
}