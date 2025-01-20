#include <iostream>
using namespace std;

void printPattern2(int N){
    if(N<=0) cout<<"Invalid input";
    else{
        for (int i = 1; i <= N; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout<<'O';
            }
            for (int j = 0; j < N-i; j++)
            {
                cout<<'X';
            }
            cout<<endl;
        }
        
    }
}

int main(){
    printPattern2(3);
}