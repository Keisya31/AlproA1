/*Nama file: 2_FrekNilTabel.c
Deskripsi: Menentukan nilai element tabel yang frekuensi kemunculannya lebih dari satu klai
Pembuat: Keisya Intan Nabila - 24060122130063
Tgl pembuatan: jumat, 18 Maret 2023*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int T[50], n, i, j;

    // Algoritma
    printf("-------PROGRAM ELEMENT FREKUENSI LEBIH DARI SATU-------\n\n");
    printf("Masukkan nilai panjang tabel = ");
    scanf("%d", &n);

    printf("Masukkan nilai element: \n");
    for(i=0; i<n; i++){
        scanf("%d", &T[i]);
    }
    printf("\nNilai yang muncul lebih dari satu kali yaitu = ");
    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=i+1; j<n; j++){
            if((T[i]!=0) && (T[i]==T[j])){
                count = count + 1;
                T[j] = 0;
            }
        }
        if(count>1){
            printf("%d ", T[i]);
        }
    }

    return 0;
}
