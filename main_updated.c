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
int sayi1,sayi2;
    printf("Enter two integer: ");
    scanf("%d",&sayi1);

    scanf("%d",&sayi2);

    printf("Number = %d\n",sayi1);
    printf("Number = %d\n",sayi2);



}

void program2(){

float  sayi1;
float pi =3.14;
    printf("Enter R for circle: ");
    scanf("%f",&sayi1);

    sayi1= sayi1*2*pi;

    printf("Area of circle = %f\n",sayi1);

}






void program3(){

int  sayi1;

    printf("Enter number: ");
    scanf("%d",&sayi1);


    if(sayi1%2==0){

    printf("Number you entered is even \n");}
    else{

    printf("Number you entered is odd \n");}

}



void program4(){

int  sayi1;

    printf("Enter degree in celcius: ");
    scanf("%d",&sayi1);


    if(sayi1<=0){

    printf("It's freezing temperature \n");}
    else{

    printf("It's not freezing temperature \n");}

}


void program5(){
float Fahrenheit, Celsius;
printf("Enter temperature in Fahrenheit:");
scanf("%f",&Fahrenheit);
Celsius = ((Fahrenheit-32)*5)/9;
printf("Temperature in Celsius is : %f",Celsius);


}

void program6(){

float cm, feet;
printf("Enter cm:");
scanf("%f",&feet);
cm = (feet*(30.48));
 printf("\n\n %f Feet in cm = %f  \n",feet,cm);

}

void program7(){

int i,sonuc;
int sayi=1;

for(i=1;i<11;i++){

    sonuc=i*i;
    printf("Square of %d is : %d\n",sayi,sonuc);
    sayi++;





}
}

void program8(){

srand(time(NULL));
int n1=rand();
int n2=rand();
int n3=rand();


    printf("n1= %d :\n ",n1);
    printf("n2= %d :\n ",n2);
    printf("n3= %d :\n ",n3);

  if (n1 >= n2 && n1 >= n3)
    printf("%d is the largest number.", n1);


  if (n2 >= n1 && n2 >= n3)
    printf("%d is the largest number.", n2);

  if (n3 >= n1 && n3 >= n2)
    printf("%d is the largest number.", n3);


}

void program9(){

int n1,n2,n3;

    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 >= n2 && n1 >= n3)
    printf("%d is the largest number.", n1);


  if (n2 >= n1 && n2 >= n3)
    printf("%d is the largest number.", n2);

  if (n3 >= n1 && n3 >= n2)
    printf("%d is the largest number.", n3);

}

void program10(){

 int i,fact=1,number;
 printf("Enter a number: ");
  scanf("%d",&number);
    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("Factorial of %d is: %d",number,fact);

}


void program11(){
int i;
for(i=1000;i<2001;i++){

    if(i%2==0){
        printf("Generated integer: %d\n",i);
        i++;}
    else{
        i++;
    }

    }

}

void program12(){
int n,r,sum=0,temp;
printf("enter the number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
printf("Palindrome number ");
else
printf("Not palindrome");


}

void program13(){
float x,sum,y;
int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; y = 1;
	for (i=1;i<n;i++)
	{
	  y = y*x/(float)i;
	  sum =sum+ y;
	}
	printf("\nThe sum  is : %f\n",sum);

}

void program14(){

int i;
float toplam;
int boyut = 8;
float a[boyut];
   for(i = 0; i < boyut; i++){
      printf("enter value to save it to array:\n");
      scanf("%f", &a[i]);
      toplam=toplam+(a[i]);

   }
   toplam/=8;
   printf("Average value of entered numbers : %d\n ",toplam);


}

void program15(){

int i;
int toplam;
int boyut = 10;
float a[boyut];
   for(i = 0; i < boyut; i++){
       if(i==9){

        i=0;
      printf("enter value to save it to array:\n");
      scanf("%f", &a[i]);
      if(a[i]!=-1){
      toplam=(a[i])*(a[i]);
      printf("Value : %d\n",toplam);}
      else{
        return 0;}
      }



       else {
       printf("enter value to save it to array:\n");
      scanf("%f", &a[i]);
      if(a[i]!=-1){
      toplam=(a[i])*(a[i]);
      printf("Value : %d\n",toplam);}
      else{
            return 0;
      }
      }}
}


void program16(){
    int a[5];
	int n,d;
	int i;
    printf("enter no.:");
    scanf("%d",&n);


    while(n != 0 && n<100000)
    {
    	for(i=0;i<5;i++){
    	a[i]=n%10;



        printf("basamaklar :%d\n",a[i]);
        n=n/10;
        }

    }

}

void program17(){

int i;
int r;
float a[10];

for(i=0;i<10;i++){
    printf("Enter values for array list:\n");
    scanf("%f",&a[i]);




}

for(r=10;r>0;r--){


    printf("\n");
    printf("Reverse order :%f",a[r]);
}

}
void program18(){

char str1[]="Ahmet";
	char str2[]="Ali";
	printf("%s%s", str1,str2);
}
void program19(){
char str[]="p2'r-o@gram84iz./";


   char s2[100];
   int i, j;



   for(i=0,j=0;str[i]!='\0';i++)
   {
     if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
     {
        s2[j]=str[i];
        j++;
     }
   }
   s2[j]='\0';

   printf("Displaying string: %s",s2);

}
void program20(){

int counter1=0;
int counter2=0;
int counter3=0;
int counter4=0;
   char s1[100];
   char sesli[]= "aeiouAEIUO";
   char sessiz[]="BCDFGJKLMNPQSTVXZHWYbcdfgjklmnpqstvxzhwy";
   char numara[]="1234567890";
   char bosluk[]="";
      int i, j, k, l ,m;

   printf("Enter string: ");
   gets(s1);

   for(i=0;s1[i]!='\0';i++)
   {
   	for(j=0;sesli[j]!='\0';j++){


	  if(s1[i]==sesli[j])
     {
        counter1++;

     }}
     for(k=0;sessiz[k]!='\0';k++){


	  if(s1[i]==sessiz[k])
     {
        counter2++;

     }}
     for(l=0;numara[l]!='\0';l++){


	  if(s1[i]==numara[l])
     {
        counter3++;

     }}
     for(m=0;bosluk[m]!='\0';m++){


	  if(s1[i]==bosluk[m])
     {
        counter4++;

     }}
   }
   printf("\nSesli harf sayisi:%d",counter1);
   printf("\nSessiz harf sayisi:%d",counter2);
   printf("\nNumara      sayisi:%d",counter3);
   printf("\nBosluk      sayisi:%d",counter4);







}

void program21(){
int i, j;
    char str[10][50], temp[50];
    printf("Enter 10 words:\n");
    for(i=0; i<10; ++i)
        scanf("%s[^\n]",str[i]);
    for(i=0; i<9; ++i)
        for(j=i+1; j<10 ; ++j){
            if(strcmp(str[i], str[j])>0){
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    printf("\nIn lexicographical order: \n");
    for(i=0; i<10; ++i){
        puts(str[i]);
    }


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


        case 4:
            program4();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;

        case 5:
            program5();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 6:
            program6();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 7:
            program7();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 8:
            program8();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 9:
            program9();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 10:
            program10();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 11:
            program11();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 12:
            program12();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 13:
            program13();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 14:
            program14();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 15:
            program15();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 16:
            program16();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 17:
            program17();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 18:
            program18();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 19:
            program19();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 20:
            program20();
            printf("\n soru tamamlandi\n");
            printf("\n Yeni soru numarasi giriniz(cikmak icin :99,soru listeli icin:55)\n");
            break;
        case 21:
            program21();
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















