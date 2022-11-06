#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int pil;
    string Jenis_kelamin;
cout<<"Pilih salah satu : \n";
cout<<"1. Laki-laki\n2. Perempuan"<<endl;
cout<<"\nPilihan : ";
cin>>pil;
switch(pil){
case 1 : Jenis_kelamin ="Laki-laki";break;
case 2 : Jenis_kelamin ="Perempuan";break;
default : 
Jenis_kelamin ="Other";
}
cout<<"jenis kelamin saya adalah "<<Jenis_kelamin;
return 0;
}
