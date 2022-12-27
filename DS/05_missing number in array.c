#include<stdio.h>
int Missing_Number(int *arr , int n){
    int Totalsum = (n+1)*(n+2)/2;
    int currentsum = 0;

    for(int i=0;i<n;i++){
        currentsum += arr[i];

    }
    return Totalsum - currentsum;
}

int main()
{
    int n ;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int missingnumber = Missing_Number(arr,n);
    printf("The missing number is %d",missingnumber); 

    return 0;
}