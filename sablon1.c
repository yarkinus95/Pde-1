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


    printf("Enter number:\n ");
    label1 :
    scanf("%c", &operation);


    switch(operation)
    {
        case '1':
            printf("deneme1\n");

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



    }

goto label1;
}

