#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sum;
    for (int i = 2; i <= 222; i+=2)
    {
        sum+=1.0/i;
    }
    cout<<setprecision(10)<<sum;
}