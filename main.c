//lab8 lab9 lab10 pdf icindeki soruların kodları info txt dosyası klasor icinde olmalı
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void sorular(){
    const int sz = 255;

    char str[sz];
    FILE *fp;
    fp = fopen("lab8_9_10_info.txt", "r");
    if (fp == NULL)
    {
        // opening the file failed ... handle it
    }
    while (fgets(str, sz, fp) != NULL)
    {
        printf("%s", str);
    };

    fclose(fp);
}


void program1(){
float sayip=1;
int n;

printf("100 den kucuk pentagon sayilari\n");
printf("*******************************\n");

for(n=1;n<9;n++){

    sayip=(n*(3*n-1))/2;

    printf("%d . pentagon sayisi %f\n",n,sayip);

}}

void program2(){
int i, j, mat1[10][10], mat2[10][10], mat3[10][10];

int row1, col1, row2, col2;

printf("\nMatris 1 in satir sayisi : ");

scanf("%d", &row1);

printf("\nMatris 1 nin sutun sayisi: ");

scanf("%d", &col1);

printf("\Matris 2 in satir sayisi  : ");

scanf("%d", &row2);

printf("\nMatris 2 nin sutun sayisi : ");

scanf("%d", &col2);

if (row1 != row2 || col1 != col2) {

printf("\nSatir sutun sayisi ayni degil ");

exit(0);

}



for (i = 0; i < row1; i++) {

for (j = 0; j < col1; j++) {

printf("Matris degerini girin a[%d][%d] : ", i, j);

scanf("%d", &mat1[i][j]);

}

}



for (i = 0; i < row2; i++)

for (j = 0; j < col2; j++) {

printf("Matris degerini girin b[%d][%d] : ", i, j);

scanf("%d", &mat2[i][j]);

}



for (i = 0; i < row1; i++)

for (j = 0; j < col1; j++) {

mat3[i][j] = mat1[i][j] + mat2[i][j];

}



printf("\nMatris toplamlari : \n");

for (i = 0; i < row1; i++) {

for (j = 0; j < col1; j++) {

printf("%d\t", mat3[i][j]);

}

printf("\n");

}

return (0);

}

void program3(){

int boy[10];
int kilo[10];
int btoplam,ktoplam;
float bort,kort;
int i;
int k=1;


for(i=0;i<10;i++){
    printf("\n %d.kisi boyu :",k);
    scanf("%d",&boy[i]);
    printf("\n %d.kisi kilosu :",k);
    scanf("%d",&kilo[i]);
    k++;

    btoplam=btoplam+boy[i];
    ktoplam=ktoplam+kilo[i];






}
bort=btoplam/10;
kort=ktoplam/10;
printf("\nOrtalama boy degeri : %f\n Ortalama kilo degeri: %f\n",bort,kort);



}


int main() {
    sorular();

    int operation;


    printf("Soru no giriniz(cikmak icin :99,soru listeli icin:55) :\n ");
    label1 :
    scanf("%d", &operation);


    switch(operation)
    {
        case 1:
            program1();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 2:
            program2();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 3:
            program3();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;




        case 99:
            return 0;

        case 55:
            sorular();
            printf("\n************************************\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99 soru listesi icin:55):\n");
            break;














    }

goto label1;
}















