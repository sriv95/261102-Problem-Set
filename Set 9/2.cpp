#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream src("score.txt");
    string textline;
    double min,max;
    int count=0;
    cout<<"Enter range of the scores [min,max] for counting: ";
    cin>>min>>max;
    while (getline(src,textline))
    {
        double n=stod(textline);
        if(n>=min&&n<=max) count++;
    }
    cout<<"The number of students who have scores in this range = "<<count;
}