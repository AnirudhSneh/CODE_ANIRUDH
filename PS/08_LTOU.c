#include<stdio.h>
void main(){
    char a[10], *j;
    printf("Enter String");
    scanf("%s",a);
    j=a;
    while(*j!='\0'){
        if(*j >=65 && *j <=90){
            *j = *j + 32;
        }
        else{
            *j = *j - 32;
        }
        j++;
    }
    printf("%s",a);
}