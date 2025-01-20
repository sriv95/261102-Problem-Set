#include<iostream>
#include<ctime>
using namespace std;

long long int fibonacci(int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(100) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(int x){
    long long int y1=1,y0=0,sum=0;
    for (int i = 2; i <= x; i++)
    {
        sum=y1+y0;
        y0=y1;
        y1=sum;
    }
    return sum;
}