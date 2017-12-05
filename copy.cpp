#include <iostream>

using namespace std;

int main(){
    int nilai, baris, kolom;
    cout<<"input nilai =";
    cin>>nilai;
    for(baris=1; baris<=nilai; baris++){
            cout<<endl;
       for(kolom=baris; kolom<=nilai; kolom++)
        {
            cout<<" ";
        }
            for(kolom=1; kolom<=baris; kolom++)
            {
                cout<<"*";
            }
            for(kolom=1; kolom<=baris; kolom++)
            {
                cout<<"*";
            }
    }

            for(kolom=1; kolom<=baris; kolom++)
            {
                cout<<endl;
                cout<<"*";
            }


    }
