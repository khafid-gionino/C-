#include <iostream>

using namespace std;

int main()
{
    float tugas, quis, uts, uas;
    float nilai_total;
    float bobot_tugas, bobot_quis, bobot_uts, bobot_uas;
    cout<<"input nilai tugas = ";
    cin>>tugas;
    cout<<"input nilai quis =";
    cin>>quis;
    cout<<"input nilai uts =";
    cin>>uts;
    cout<<"input nilai uas =";
    cin>>uas;
    bobot_tugas=0.3; bobot_quis=0.3; bobot_uts=0.2; bobot_uas=0.2;
    nilai_total=(tugas*bobot_tugas) + (quis*bobot_quis) + (uts*bobot_uts) + (uas*bobot_uas);
    cout<<"nilai total pemrograman terstruktur adalah ="<<nilai_total;


}
