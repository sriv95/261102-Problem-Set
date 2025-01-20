#include <iostream>
using namespace std;

int greatDivisor(int n){
    int i=1,max=1;
    while (i<n)
    {
        if (n%i==0)
        {
            max=i;
        }
        i++;
    }
    return max;
}

int main (){
    cout<<"1; "<<greatDivisor(1);
    cout<<"12; "<<greatDivisor(12);
    cout<<"91; "<<greatDivisor(91);
    cout<<"49; "<<greatDivisor(49);
    cout<<"81; "<<greatDivisor(81);
    cout<<"55; "<<greatDivisor(55);
    return 0;
}