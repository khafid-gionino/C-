#include <iostream>

using namespace std;

int main(){
    int N, hasil;
        cout<<"input nilai N =";
        cin>>N;
        if(N>10){
            if(N%3==0)
                cout<<"Kelipatan 3 ";
            else
                cout<<"Bukan kelipatan 3";
                }
        else{
            if(N%2==0)
                cout<<"Genap";
            else
                cout<<"Ganjil";
                }

}
