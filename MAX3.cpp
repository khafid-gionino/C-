#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int A, B, C, MAX;
    cout<<"masukkan nilai A :";
    cin>>A;
    cout<<"masukkan nilai B :";
    cin>>B;
    cout<<"masukkan nilai C :";
    cin>>C;
    if ((A>B)&&(A>C)){
        MAX=A;
        cout<<"MAX.nya adalah ="<<MAX;
    }
    else if((B>A)&&(B>C)){
            MAX=B;
        cout<<"MAX.nya adala ="<<MAX;
    }
    else {
        MAX=C;
        cout<<"MAX.nya adalah ="<<MAX;
    }


}
