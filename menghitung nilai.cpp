#include <iostream>

using namespace std;

main(){
    int andi, rizal, dani, rahman, fauzi;
    int rata_rata, maks, jumlah;
    cout<<"masukkan nilai andi :";
    cin>>andi;
    cout<<"masukkan nilai rizal :";
    cin>>rizal;
    cout<<"masukkkan nilai dani :";
    cin>>dani;
    cout<<"masukkan nilai rahman :";
    cin>>rahman;
    cout<<"masukkan nilai fauzi :";
    cin>>fauzi;
    jumlah=andi+rizal+dani+rahman+fauzi;
    cout<<"jumlah ="<<jumlah<<endl;
    rata_rata=jumlah/5;
    cout<<"rata rata ="<<rata_rata;
    cout<<endl;
    maks=andi;
            if (rizal>=maks)
            {
                maks=rizal;
              }
            if (dani>=maks)
            {
                maks=dani;
            }
             if (rahman>=maks){
                maks=rahman;
            }
             if (fauzi>=maks){
                maks=fauzi;
            }

            cout<<"maksimalnya adalah ="<<maks;



    }


//for (i=1; i++: i<=jumlah)
