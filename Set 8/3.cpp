#include <iostream>
using namespace std;

int main(){
    int i=1,count=0,min;
    while (i>0)
    {
        cout<<"Input number: ";
        cin>>i;
        if(i>0){
            if (count==0) min=i;
            else if (i<min)
            {
                min=i;
            }
            
        }else break;
        count++;
    }
    if (count>0) cout<<"Minimum = "<<min;
    else cout<<"Minimum = N/A";
}