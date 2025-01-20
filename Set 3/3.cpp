#include <iostream>
using namespace std;

int main (){
    int i=3,sum=0;
    while (i<=300) {sum+= i*i;i+=3;}
    cout<<sum;
    return 0;
}