#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int X,Y,Z;
    cin>>X>>Y;
    if (X>=20&&Y>=20&&X+Y>=50)
    {
        if (Y>X) Y=2*Y;
        else Z=(X+Y)/2;
    }else{
        Z=sqrt(pow(X,2)+pow(Y,2));
        if (Z>50) Z=50;
    }
    cout<<Z;
    return 0;
}