#include <iostream>

using namespace std;

main(){
    int h_gula, h_beras, h_minyak, h_telor, diskon, total;
    int b_gula, b_beras, b_minyak, b_telor;
    cout<<"masukan jumlah Gula :";
    cin>>b_gula;
    cout<<"masukkan jumlah beras :";
    cin>>b_beras;
    cout<<"masukkan jumlah minyak :";
    cin>>b_minyak;
    cout<<"msukkan numlah telor :";
    cin>>b_telor;
    h_gula=50000, h_beras=7000, h_minyak=3000, h_telor=4000;
    diskon=0.2;
    total=((h_gula*b_gula) + (h_minyak*b_minyak) + (h_telor*b_telor));
    diskon=total * diskon;
    cout<<"totalnya adalah ="<<total<<endl;
    cout<<"diskonnya ="<<diskon;



}
