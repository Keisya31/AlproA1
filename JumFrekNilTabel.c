/*Nama file: 3_JumlahFrekNilTabel.c
Deskripsi: Menentukan jumlah nilai element tabel yang frekuensi kemunculannya lebih dari satu kali
Pembuat: Keisya Intan Nabila - 24060122130063
Tgl pembuatan: jumat, 18 Maret 2023*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int n, i, j, count;
    int T[50], total=0;

    // Algoritma
    printf("-------PROGRAM UNTUK MENENTUKAN JUMLAH NILAI YANG FREKUENSI >1 DARI TABEL-------\n");
    printf("\nMasukkan nilai panjang tabel = ");
    scanf("%d", &n);

    printf("Masukkan nilai element: \n");
    for(i=0; i<n; i++){
        scanf("%d", &T[i]);
    }
    for(i=0; i<n; i++){
        count = 1;
        for(j=i+1; j<n; j++){
            if((T[i]==T[j])){
                count = count + 1;
                T[j] = 0;
            }
        }

        if(count>1){
            total = total + (count*T[i]);
        }
    }
    printf("Jadi, jumlah total dari angka yang sama adalah: %i", total);

    return 0;
}
