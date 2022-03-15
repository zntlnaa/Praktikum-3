/*Nama File: BiayaParkir.c*/
/*Deskripsi: Menghitung besarnya biaya parkir berdasarkan lamanya parkir, berdasarkan aturan
            biaya parkir 2 jam pertama Rp2000 dan per jam berikutnya dihitung Rp500*/
/*Nama : Zenit Laena Fathonah*/
/*NIM : 24060121120006*/

#include <stdio.h> /*Header File*/
int main(){ /*Program Utama*/
/*Kamus*/
    int bp; /*biaya parkir, rupiah*/
    int n; /*lama parkir, jam*/
/*Algoritma*/
    printf("\n====Program Biaya Parkir====\n");
    printf("\nMasukkan lamanya waktu parkir = ");
    scanf("%d", &n); /*input*/

    if (n>0){
        if ((n == 1) ||(n == 2)){
            bp = 2000; /*proses*/
            printf("\nLama parkir %d jam, maka biaya Parkir Anda = Rp %d", n, bp); /*output*/
        }
        else {
            bp = (2000 + ((n-2)*500)); /*proses*/
            printf("\nLama parkir %d jam, maka biaya Parkir Anda = Rp %d", n, bp); /*output*/
        }
    }
    else {
        printf("\nMasukkan Anda tidak tepat");
    }
    return 0;

}
