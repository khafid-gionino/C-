#include <iostream>
#include <conio.h>

using namespace std;
int main(){
int data[20], n, jum, i;
float rata_rata;
jum=0;
    cout<<"Menetukan nilai Rata-Rata di array \n\n";
    cout<<"input nilai N =";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"input data ke -"<<i<<"   =";
        cin>>i;
        jum=jum+data[i];
    }
    rata_rata=jum/n;
    cout<<endl;
    cout<<"rata rata ="<<rata_rata;
    return 0;

}
