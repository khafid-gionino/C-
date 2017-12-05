#include <iostream>

using namespace std;

main(){
    int p, l, phi, d;
    float luas_persegi_panjang, luas_lingkaran, luas_yang_diarsir;
    cout<<"input panjang :";
    cin>>p;
    cout<<"input lebar :";
    cin>>l;
    d=10;
    phi=3.14;
    luas_persegi_panjang= p*l;
    luas_lingkaran= phi*(d*d);
    luas_yang_diarsir= luas_lingkaran - luas_persegi_panjang;
    cout<<"luas = "<<luas_persegi_panjang<<endl;
    cout<<"luas lingkaran = "<<luas_lingkaran<<endl;
    cout<<"luas yang di arsir ="<<luas_yang_diarsir;

}
