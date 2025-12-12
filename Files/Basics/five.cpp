// A program to check whether a number is divisible by 2 and 5 (from 1 to 100)
#include<iostream>
using namespace std;
int main(){
    cout<< "Numbers divisible by 2 and 5 between 1 and 100 are: \n";
    for(int i =1; i<=100; i++){
        if(i%2 == 0 && i%5 == 0){
            cout <<i << endl;
        }
    }
    return 0;
}