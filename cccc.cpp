#include <iostream>

using namespace std;

int main(){
    int dish;
    cout<<"       Menghitung ukuran DISH"<<endl;
    cout<<"======================================"<<endl;
    cout<<"masukkan ukuran DISH dalam bentuk cm =";
    cin>>dish;
    if ((dish>=335.28)&&(dish<=365.76)){
        cout<<"12 Feet";}
        else if ((dish>=304.80)&&(dish<=335.28)){
                cout<<"11 Feet";}
        else if ((dish>=274.32)&&(dish<=304.80)){
                cout<<"10 Feet";}
        else if ((dish>=243.84)&&(dish<=274.32)){
                cout<<"9 Feet";}
        else if ((dish>=213.36)&&(dish<=243.84)){
                cout<<"8 Feet";}
        else if ((dish>=182.88)&&(dish<=213.36)){
                cout<<"7 Feet";}
        else if ((dish>=152.4)&&(dish>=182.88)){
                cout<<"6 Feet";}
        else if ((dish>=129.92)&&(dish<=152.4)){
                cout<<"5 Feet";}
        else if ((dish>=91.44)&&(dish>=129.92)){
                cout<<"4 Feet";}
        else if ((dish>=60.96)&&(dish<=91.44)){
                cout<<"3 Feet";}
        else if ((dish>=30.48)&&(dish<=60.96)){
                cout<<"2 Feet";}

}
