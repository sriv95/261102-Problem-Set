#include <iostream>
using namespace std;

int findDivisor(int n){
    int i=n,max=1;
    while (i>1)
    {
        if (n%i==0)
        {
            max=i;
        }
        i--;
    }
    return max;
}

int main (){
    cout<<"10; "<<findDivisor(10);
    cout<<"97; "<<findDivisor(97);
    cout<<"221; "<<findDivisor(221);
    return 0;
}