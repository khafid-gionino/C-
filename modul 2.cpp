#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int nilai, baris, kolom;
    cout<<"-----Program Modul 2-----"<<endl;
    cout<<"Input =  ";
    cin>>nilai;
    for ( baris=1; baris<=nilai; baris++ )
    {
        for (kolom=1; kolom<=nilai; kolom++)
        {
            if(baris>1 && baris<nilai && kolom> 1 && kolom<nilai){
                if(kolom == nilai - baris+1){
                    cout<<" |";
                }
                else {
                    cout<<" *";
                }
            }else{
                cout<<" *";
            }
        }
       cout<<"\n";
    }
    //return 0;
    getch();
}
