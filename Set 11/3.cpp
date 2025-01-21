#include <iostream>
#include <cmath>
using namespace std;

long double func1(double N){
    if(N==1) return 2;
    return pow(2,N)+func1(N-1);
}

long double func2(double N){
    if(N==1) return 1;
    return sqrt(N*func2(N-1));
}

long double func3(double N){
    if(N==1) return 1;
    return 1+(N/func3(N-1));
}

int main(){
    cout<<func1(5)<<endl;
    cout<<func2(5)<<endl;
    cout<<func3(5)<<endl;
}