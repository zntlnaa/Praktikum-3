/*Nama File: UpahKerja.c*/
/*Deskripsi: Menghitung upah kerja per minggu*/
/*Nama : Zenit Laena Fathonah*/
/*NIM : 24060121120006*/

#include <stdio.h> /*Header File*/
int main(){ /*Program Utama*/
/*Kamus*/
    int g; /*jenis golongan*/
    int j; /*waktu kerja dalam seminggu, jam*/
    int upah; /*upah kerja dalam seminggu, rupiah*/
 /*Algoritma*/
    printf("\n===============Program Menghitung Upah Kerja=================\n");

    printf("\nMasukkan banyaknya jam kerja Anda dalam seminggu = ");
    scanf("%d", &j); /*input*/

    printf("\nMasukkan jenis golongan kerja (1-4) = ");
    scanf("%d", &g); /*input*/

    if ((0 < j ) && (j < 40)){
        switch (g){
        case 1 :
            upah = j * 1000;
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        case 2 :
            upah = j * 1500;
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        case 3 :
            upah = j * 2000;
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        case 4 :
            upah = j * 2500;
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        default :
            printf("Masukkan golongan tidak tepat"); /*output*/
            break;
        }
    }
    else{
        switch (g){
        case 1 :
            upah = (40*1000) + ((j-40)*1.5*1000);
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        case 2 :
            upah = (40*1500) + ((j-40)*1.5*1500);
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        case 3 :
            upah = (40*2000) + ((j-40)*1.5*2000);
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        case 4 :
            upah = (40*2500) + ((j-40)*1.5*2500);
            printf("\nUpah Kerja Anda = Rp %d", upah); /*output*/
            break;
        default :
            printf("Masukkan golongan tidak tepat"); /*output*/
            break;
        }
    }
    return 0;
}
