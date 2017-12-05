#include <iostream>

using namespace std;
main(){
    int u_pembayaran, A, B, C, D, E, total_b, diskon, total_p, uang_k;
    cout<<"masukkan harga gula :";
    cin>>A;
    cout<<"masukkan harga beras :";
    cin>>B;
    cout<<"masukkan harga minyak :";
    cin>>C;
    cout<<"masukkan harga telor :";
    cin>>D;
    cout<<"masukkan harga garam :";
    cin>>E;
    cout<<"masukkan uang pembayaran :";
    cin>>u_pembayaran;
    total_b=A+B+C+D+E;
    if (total_b<500000)
        {
        diskon = total_b * 0.1;
        total_p = total_b - diskon;
        uang_k = u_pembayaran - total_p;
         cout<<"diskon ="<<diskon<<endl;
         cout<<"bayar ="<<total_p<<endl;
         cout<<"kembalian ="<<uang_k<<endl;
               }
    else if ((total_b>500000)&&(total_b<1000000))
    {
        diskon = total_b * 0.15;
        total_p = total_b - diskon;
        uang_k = u_pembayaran - total_p;
         cout<<"diskon ="<<diskon<<endl;
         cout<<"bayar ="<<total_p<<endl;
         cout<<"kembalian ="<<uang_k<<endl;
            }
            else {
                diskon = total_b * 0.2;
                total_p = total_b - diskon;
                uang_k = u_pembayaran - total_p;
                cout<<"diskon ="<<diskon<<endl;
                cout<<"bayar ="<<total_p<<endl;
                cout<<"kembalian ="<<uang_k<<endl;
                        }


}
