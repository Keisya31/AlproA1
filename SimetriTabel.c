/*Nama file: 4_SimetriTabel.c
Deskripsi: Membuktikan apakah T1 dan T2 simteri atau tidak
Pembuat: Keisya Intan Nabila - 24060122130063
Tgl pembuatan: jumat, 18 Maret 2023*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int i, T1[50], T2[50];
    int n1, n2, count;


    // Algoritma
    printf("-------PROGRAM UNTUK MENGECEK APAKAH TABEL 1 DAN TABEL 2 SIMETRI ATAU TIDAK-------\n");
    printf("Masukkan nilai panjang T1: ");
    scanf("%d", &n1);
    printf("\nMasukkan nilai panjang T2: ");
    scanf("%d", &n2);
    printf("\nMasukkan elemen T1: \n");
    for(i=0; i<n1; i++){
        scanf("%d", &T1[i]);
    }
    printf("Masukkan elemen T2: \n");
    for(i=0; i<n2; i++){
        scanf("%d", &T2[i]);
    }

    if(n1==n2){
        count = 0;
        for(i=0; i<n1; i++){
            if(T1[i]==T2[i]){
                count = count + 1;
            }
        }
        if(count==n1){
            printf("Tabel simetri");
        }
        else{
            printf("Tabel tidak simetri");
        }
    }
    else{
        printf("Tabel Tidak Simetri");
    }
    return 0;
}
