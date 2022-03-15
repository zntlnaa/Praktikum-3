/*Nama File: TarifPLN.c*/
/*Des kripsi: Menghitung dan menampilkan besarnya tarif listrik pada layar*/
/*Nama : Zenit Laena Fathonah*/
/*NIM : 24060121120006*/

#include <stdio.h> /*Header File*/
int main(){ /*Program Utama*/
/*Kamus*/
    int g; /*golongan tarif*/
    int d; /*daya listrik, kWH*/
    int Tl; /* jumlah tarif listrik, rupiah*/
 /*Algoritma*/
    printf("\n========Program Menghitung B esarnya Tarif Listrik========\n");

    printf("\nMasukkan golongan tarif (1-2) = ");
    scanf("%d", &g); /*input*/

    printf("\nMasukkan besarnya daya listrik (d>0)= ");
    scanf("%d", &d); /*input*/
    if ( d > 0){
        if (g == 1) {
            if ((0<d) && (d<=100)){
                Tl = (1000 * 100);
                printf("\nGolongan %d, pemakaian %d kWH, maka jumlah bayarnya = Rp %d", g, d, Tl); /*output*/
            } else if ((100<d) && (d<1000)){
                Tl = (1000 * d);
                printf("\nGolongan %d, pemakaian %d kWH, maka jumlah bayarnya = Rp %d", g , d, Tl); /*output*/
            } else if (d>999){
                Tl = 1000 * d * 1.1;
                printf("\nGolongan %d, pemakaian %d kWH, maka jumlah bayarnya = Rp %d", g, d,  Tl); /*output*/
            }
        }
        else if (g == 2){
            if ((0<d) && (d<=100)){
                Tl = (2000 * 100);
                printf("\nGolongan %d, pemakaian %d kWH, maka jumlah bayarnya = Rp %d", g, d, Tl); /*output*/
        }   else if ((100<d) && (d<1000)){
                Tl = (2000 * d);
                printf("\nGolongan %d, pemakaian %d kWH, maka jumlah bayarnya = Rp %d", g, d, Tl); /*output*/
        }   else if (d>999){
                Tl = 2000 * d * 1.1;
                printf("\nGolongan %d, pemakaian %d kWH, maka jumlah bayarnya = Rp %d", g, d, Tl); /*output*/
        }
    }
        else {
            printf("\nMasukkan Anda tidak tepat");}
    }
    else {
        printf("\nMasukkan Anda tidak tepat");
    }
    return 0;
}
