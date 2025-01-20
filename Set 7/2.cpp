#include <iostream>
#include <string>
using namespace std;

string tommy(int Looks,int Habits){
    if (Looks<50)
    {
        if (Habits<50) return "Unfriend";
        else return "Friend";
    }else if (Looks<80)
    {
        if (Habits<50) return "One-night-stand";
        else return "Friend";
    }else{
        if (Habits<50) return "One-night-stand";
        else return "Girlfriend";
    }
    
    
}

int main(){
    
    return 0;
}