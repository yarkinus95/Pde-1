#include <stdio.h>
#include <stdlib.h>

void soru1(){
	
	char str1[]="Ahmet";
	char str2[]="Ali";
	printf("%s%s", str1,str2);
	
	
	

}

void soru2(){
	
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

void soru3(){
	
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



int main(){
	soru3();
	
	
	
	
	
}

