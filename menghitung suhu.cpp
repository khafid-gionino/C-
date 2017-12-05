#include <iostream>

using namespace std;

main(){
    float C, R, F, K;
cout<<"program menghitung suhu"<<endl;
cout<<"masukkan nilai suhu dalam bentuk celcius (C) =";
cin>>C;
R=0.8 * C;
F=(1.8 * C) + 32;
K=C + 273;
cout<<"dalam satuan reamur (R)     ="<<R<<endl;
cout<<"dalam satuan fahrenheit (F) ="<<F<<endl;
cout<<"dalam satuan kelvin (K)     ="<<K;

}
