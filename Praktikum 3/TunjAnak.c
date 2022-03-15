/*Nama File: TunjAnak.c*/
/*Des kripsi: Menghitung dan menampilkan besarnya tunjangan anak*/
/*Nama : Zenit Laena Fathonah*/
/*NIM : 24060121120006*/

#include <stdio.h> /*Header File*/
int main(){ /*Program Utama*/
/*Kamus*/
    int a; /*jumlah anak*/
    int g; /*gaji pokok, rupiah*/
    int Ta; /*besarnya tunjangan anak, rupiah*/
 /*Algoritma*/
    printf("\n========Program Menghitung Besarnya Tunjangan Anak========\n");

    printf("\nMasukkan jumlah anak = ");
    scanf("%d", &a); /*input*/

    printf("\nMasukkan gaji pokok = ");
    scanf("%d", &g); /*input*/

    if ((a >= 0) && (a <= 3)){
        Ta = (a * (0.1) * g);
        printf("\nJumlah anak = %d dan Gaji Pokok = %d, maka besarnya tunjangan anak = %d", a,g,Ta); /*output*/
    } else{
        Ta = (3 * (0.1) * g);
        printf("\nJumlah anak = %d dan Gaji Pokok = %d, maka besarnya tunjangan anak = %d", a,g,Ta); /*output*/
    }

    return 0;

}
