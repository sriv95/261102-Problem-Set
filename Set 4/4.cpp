#include <iostream>
#include <cmath>
using namespace std;

double calculate(double x){
    return sin(pow(x,3))/(log((2*x+1)/(x*x)));
}

int main (){
    cout<<calculate(5);
    return 0;
}