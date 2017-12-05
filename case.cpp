#include <iostream>

using namespace std;
main(){
    int golongan;
    cout<<"Menu golongan anda :"<<endl;
    cout<<"======================================="<<endl;
    cout<<" Golongan 1"<<endl;
    cout<<" Golongan 2"<<endl;
    cout<<" Golongan 3"<<endl;
    cout<<" Golongan 4"<<endl;
    cout<<"======================================="<<endl;
    cout<<"Masukan golongan anda :";
    cin>>golongan;

    cout<<endl;
    switch(golongan){
        case 1 : cout<<"Gaji anda adalah 1 Juta";
                break;
        case 2 : cout<<"Gaji anda adalah 2 Juta";
                break;
        case 3 : cout<<"Gaji anda adalah 3 Juta";
                break;
        case 4 : cout<<"Gaji anda adalah 4 Juta";
                break;

    }


}
