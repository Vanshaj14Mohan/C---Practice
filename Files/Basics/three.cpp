// Even and odd numbers

#include<iostream>
using namespace std;
int main(){
    cout<< "Enter a number: ";
    int num;
    cin>> num;
    if (num % 2 ==0){
        cout<< num << " is an even number \n";
    }
    else{
        cout<< num << " is an odd number \n";
    }
    return 0;
}
