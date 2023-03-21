/*Nama file: 5_JumBarKolMat.c
Deskripsi: Menampilkan jumlah setiap baris dan kolom pada tabel T
Pembuat: Keisya Intan Nabila - 24060122130063
Tgl pembuatan: jumat, 18 Maret 2023*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int i, j, n;
    int T[30][30];
    int sumBaris, sumKolom;

    // ALgoritma
    printf("-------PROGRAM UNTUK MENJUMLAHKAN NILAI MASING-MASING BARIS DAN KOLOM PADA MATRIKS-------\n");
    printf("Masukkan ukuran tabel matriks: \n");
    scanf("%d", &n);

    printf("Masukkan element matriks: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Element ke- [%d][%d]: ", i,j);
            scanf("%d", &T[i][j]);
        }
    }
    printf("\nMatriks nya adalah: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d\t ", T[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<n; i++){
        sumBaris = 0;
        for(j=0; j<n; j++){
            sumBaris = sumBaris + T[i][j];
        }
        printf("\nsumBaris = %d", sumBaris);

    }
    printf("\n\n");
    for (i=0; i<n; i++){
        sumKolom = 0;
        for(j=0; j<n; j++){
            sumKolom = sumKolom + T[j][i];
        }
        printf("sumKolom = %d\n", sumKolom);
    }
    return 0;
}
