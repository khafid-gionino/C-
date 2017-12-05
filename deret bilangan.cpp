#include <iostream>

using namespace std;

int main(){
    int akhir, awal;
    cout<<"masukkan batas deret bilangan :";
    cin>>akhir;
    for(awal=0; awal<=akhir; awal++)
    {
        if(awal%3==0 && awal%2!=0)
        {
            cout<<awal<<endl;
        }
    }
}
