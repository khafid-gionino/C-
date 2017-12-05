#include <iostream>

using namespace std;
main(){
float harga_barang, jumlah_barang;
float total;
float discount;
cout<<"    PENJUALAN    "<<endl;
cout<<"masukkan harga barang  = ";
cin>>harga_barang;
cout<<"masukkan jumlah barang = ";
cin>>jumlah_barang;
total=harga_barang * jumlah_barang;
cout<<"totalnya adalah ="<<total<<endl;
discount = total * 0.2;
if (total >= 100000)
    {
    total = total - discount;
    cout<<"discount 20%= "<<discount<<endl;
    }
cout<<"total bayar = "<<total;
}
