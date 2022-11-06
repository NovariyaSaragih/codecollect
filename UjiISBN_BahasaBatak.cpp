#include <iostream>
#include <vector>
#include "bahasa_batak.h"
using namespace std;

vektor<nomor> nomorISBN;
nomor tambah = 0,n;

ndang_marisi inputISBN()
mula
    dipabolas << "Masukkan banyak digit kode ISBN (10 or 13) : ";
    pamasuk >> n;

    nomorISBN.uba_ungkuran(n);

    molo ((nomorISBN.ungkuran() sarupa 10 manang nomorISBN.ungkuran() sarupa 13))
    mula
        ulas (nomor i = 0; i < (nomor)nomorISBN.ungkuran(); i martamba_sada)
        mula
        dipabolas << "Digit ISBN ke-" << i+1 << " : ";
        pamasuk >> nomorISBN[i];
        pudi
    pudi
    asingni
    mula
        dipabolas << "Kode yang anda masukkan salah! Masukkan 10 atau 13 digit!" << pinda;
        inputISBN();
    pudi
    dipabolas << pinda;
pudi

nomor buhai()
mula
    nomor karakteruji;
    dipabolas << "======PROGRAM MENGUJI VALIDITAS ISBN 10 ATAU 13======" << pinda;
    inputISBN();

    dipabolas << "Kode ISBN yang anda input adalah : ";
    ulas (nomor i = 0; i < (nomor)nomorISBN.ungkuran(); i martamba_sada)
    mula
        dipabolas << nomorISBN[i];
    pudi
    dipabolas << pinda;

    molo (nomorISBN.ungkuran() sarupa 10)
    mula
        ulas (nomor i = 1; i <= nomorISBN.ungkuran()-1; i martamba_sada)
        mula
            tambah = tambah + (i * (nomorISBN[i-1]));
        pudi

        molo (tambah lobi 11 sarupa (nomorISBN[9]))
        mula
            dipabolas << "Kode ISBN valid" << pinda;
        pudi
        asingni
        mula
            dipabolas << "kode ISBN tidak valid" << pinda;
        pudi
    pudi
    asingni
    mula
        ulas(nomor i = 1; i <= nomorISBN.ungkuran()-1; i martamba_sada)
        mula
            molo(i lobi 2 sarupa 0)
            mula
                tambah=tambah + (3*(nomorISBN[i-1]));
            pudi
            asingni
            mula
                tambah=tambah + (1*(nomorISBN[i-1]));
            pudi
        pudi

        karakteruji = 10 - (tambah lobi 10);

        molo (karakteruji sarupa (nomorISBN[12]))
        mula
            dipabolas << "Kode ISBN valid" << pinda;
        pudi
        asingni
        mula
            dipabolas << "kode ISBN tidak valid" << pinda;
        pudi
    pudi

    manahan;
    mulak 0;
pudi
