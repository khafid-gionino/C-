#include <iostream>
#include <conio.h>>

using namespace std;
int main(){
    int a;
    cout<<"bilangan ganjil 1-100 adalah =";
    for(a=0; a<=100; a++)
    {
        a%2==0;
        a++;
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"bilangan genap 1-100 adalah =";
    for(a=0; a<=100; a++)
    {
        a%2==0;
        a++;
        cout<<a+1<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"bilangan kelipatan 5 dari 1-100 adalah =";
    for(a=0; a<=100; a++)
    {
        if(a%5==0 && a%2!=0)
            cout<<a<<" ";
    }
    cout<<endl;
    cout<<endl;
    int penjumlahan=0;
    cout<<"menjumlahka bilangan 1-100 =";
    for(a=0; a<=100; a+2)
    {
        a++;
        penjumlahan +=a;
        cout<<penjumlahan<<" ";

    }
    cout<<endl;
    cout<<endl;
    int j,c;
    cout<<"Mencari bilangan prima 1-100 =";
    for (a=0; a<=100; a++)
    {
        c=0;
        for(j=1; j<=a; j++){
            if(a%j==0)
            {c=c+1;}
    }
            if(c==2)
                cout<<a<<" ";
    }
    getch();
}
