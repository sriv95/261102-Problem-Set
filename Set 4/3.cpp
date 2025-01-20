#include <iostream>
using namespace std;

double findKineticEnergy(double m, double v){
    return 0.5*m*v*v;
}

int main (){
    cout<<"m=5, v=10, E="<<findKineticEnergy(5,10);
    return 0;
}