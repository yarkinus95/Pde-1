// Program to create a simple calculator
#include <stdio.h>
void sorular(){
    const int sz = 255;

    char str[sz];
    FILE *fp;
    fp = fopen("deneme2.txt", "r");
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


void toplamlari(){

int sonuc;
for(int i=0;i<101;i++){


    sonuc=sonuc+i;


}
    printf("Number = %d\n",sonuc);



}

void ucaksorusu(){

int zaman,islem;

printf("Zaman giriniz (0 ile 50 araliginda) : ");
    scanf("%d", &zaman);

    if(zaman>=0 && zaman <=15){

        islem=480/zaman;

        printf("Ucagin hizi= %d\n",islem);
        }
    else if(zaman>=16 &&zaman <=35){

        printf("ucagin hizi sabit 480 km/h dir \n");
        }

    else if(zaman>=35 && zaman<=50){

        islem=480+(480/15)*(zaman-35);
        printf("Ucagin hizi= %d\n",islem);
    }
    }















void program1(){
int testInteger,sonuc;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    sonuc= testInteger*testInteger;
    printf("Number = %d\n",sonuc);



}
int main() {
    sorular();

    char operation;


    printf("Soru no giriniz(cikis icin 5 basin) :\n ");
    label1 :
    scanf("%c", &operation);


    switch(operation)
    {
        case '1':
            toplamlari();
            printf("deneme1 tamamlandi\n");

            break;

        case '2':
            program1();
            printf("deneme tamamlandi\n");
            break;

        case '3':
            printf("deneme3\n");
            break;

        case '4':
            printf("deneme4\n");
            break;
        case '5':
            return 0;
        case '7':
            ucaksorusu();
            printf("soru7 tamamlandi\n");
            break;



    }

goto label1;
}

