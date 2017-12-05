#include <iostream>

using namespace std;

int main(){
    int makan,loundri, spp, kos;
    int total, ortu;
    cout<<"Menghitung Pengeluaran Bulanan"<<endl;
    cout<<"Biaya makan setiap bulan :";
    cin>>makan;
    cout<<"Biaya loundri setiap bulan :";
    cin>>loundri;
    cout<<"Biaya SPP perbulan :";
    cin>>spp;
    cout<<"Biaya KOS per bulan :";
    cin>>kos;
    cout<<"KIriman dari orang tua :";
    cin>>ortu;
    total=makan+loundri+spp+kos;
    if (total<ortu)
        cout<<"uang anda cukup";
    else
        cout<<"uang anda tidak cukup";

}
