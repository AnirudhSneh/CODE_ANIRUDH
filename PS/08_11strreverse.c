#include<stdio.h>
void strreverse(char*p){
    char *q,r;
    q=p;
    while(*q!='\0'){
        q++;
    }
    q--;
    while(p<q){
        r=*p;
        *p=*q;
        *q=r;
        p++;
        q--;
    }
}

void main()
{char a[10];
printf("Enter String");
scanf("%s",a);
strreverse(a);
printf("Reverse String = %s",a);

}