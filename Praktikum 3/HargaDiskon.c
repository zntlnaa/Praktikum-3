/*Nama File: HargaDiskon.c*/
/*Deskripsi: Menghitung besarnya harga setelah diskon*/
/*Nama : Zenit Laena Fathonah*/
/*NIM : 24060121120006*/

#include <stdio.h> /*Header File*/
int main(){ /*Program Utama*/
/*Kamus*/
    char j; /*Pilihan Jenis Diskon*/
    int h; /*Harga Beli, rupiah*/
/*Algoritma*/
    printf("\n=====================Program Harga Diskon====================\n");

    printf("\nMasukkan pilihan jenis diskon (A-C) = ");
    scanf("%c", &j); /*input*/

    printf("\nMasukkan harga beli (200 < harga beli < 10000) = ");
    scanf("%d", &h); /*input*/

    if ((200 < h ) && (h <10000)){
        switch (j){
        case 'A' :
            printf("\nHarga beli setelah diskon = Rp %d", h-(h*10/100)); /*output*/
            break;
        case 'B' :
            printf("\nHarga beli setelah diskon = Rp %d", h-(h*15/100)); /*output*/
            break;
        case 'C' :
            printf("\nHarga beli setelah diskon = Rp %d", h-(h*20/100)); /*output*/
            break;
        default :
            printf("\nMasukkan Jenis Diskon tidak tepat"); /*output*/
            break;
        }
    }
    else{
        printf("\nHarga beli tidak memenuhi syarat"); /*output*/
    }
    return 0;
}
