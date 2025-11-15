// Find maximum number among three numbers
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<< " Enter three numbers: ";
    cin>> a >> b >> c;
    if( a > b && a >c) {
        cout << " maximum number is: "<< a<<endl;
    }
    else if (b > c && b > a) {
        cout << "maximum number is:" << b << endl;
    }
    else{
        cout << "maximum number is: " << c << endl;
    }
    return 0;
}