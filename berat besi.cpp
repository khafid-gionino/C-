#include <iostream>
#include <conio.h>
using namespace std ;

int main(){
    float ammonium=0.5, super_fosfat=0.35, berat_pupuk=15;
    float berat_besi, besi;
    cout<<"==========================="<<endl;
    cout<<"   Menentukan Berat besi   "<<endl;
    cout<<"==========================="<<endl;
    cout<<" Diketahui berat pupuknya :"<<berat_pupuk<<"kg"<<endl;
    besi=1-ammonium-super_fosfat;
    berat_besi=berat_pupuk * besi;
    cout<<" Maka berat besinya adalah ="<<berat_besi;
    getch();



}
