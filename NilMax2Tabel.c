/*Nama file: 1_NilMax2Tabel.c
Deskripsi: Menentukan nilai maksimum ke 2 dari sebuah tabel (array)
Pembuat: Keisya Intan Nabila - 24060122130063
Tgl pembuatan: jumat, 17 Maret 2023*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N;
    int T[100];
    int i;
    int max, secmax;

    // Algoritma
    printf("-------PROGRAM MENAMPILKAN NILAI MAKSIMUM KE DUA-------\n");
    printf("\nMasukkan panjang/jumlah elemen tabel = ");
    scanf("%i", &N);

    printf("Masukkan elemen tabel = \n");
    for(i=0; i<N; i++){
        scanf("%i", &T[i]);
    }

    max = 0;
    secmax = 0;
    for(i=0; i<N; i++){
        if(T[i] >= max){
            secmax = max;
            max = T[i];
        }
        else if(T[i] > secmax){
                secmax = T[i];
        }

    }
    printf("Nilai max ke 2 adalah : ");
    printf("%d\n", secmax);

    return 0;
}

