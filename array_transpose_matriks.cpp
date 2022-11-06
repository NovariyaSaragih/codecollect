#include <iostream>
#include <vector>
#include <conio.h>
#include <iomanip>
using namespace std;

int main (){
    int a,b,i,j,k;

        system("cls");
    printf("|==============================================|\n");
    printf("|           Program Transpose Matriks          |\n");
    printf("|==============================================|\n\n");
    cout << "Tentukan Jumlah Dan Baris"<<endl;
    ulang1 :
    cout << "Kolom dan Baris Matriks : "; cin >> a ; cin >> b;
    int matriks[a][b] = {0};

    system("cls");
    printf("Masukkan Matriks m x n = %i x %i \n",a,b);
    for (i = 0; i < a ; i++) {
            for (j = 0 ; j < b ; j ++){
            cin >> matriks[i][j];
            }
        }
    cout << endl;

    puts("Hasil Transpose : ");
    for (i= 0;i < b ;i++) {
            for (j = 0; j < a ; j++) {
            cout << left << setw(2) << matriks[j][i] << " ";

        }
        cout << endl;
    }
    return 0;
    }