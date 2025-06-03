#include <stdio.h>
void insertionsort(int n ,int a[10]){
    int temp ,i,j ;
    for(i=1;i<n;i++){
        temp =a[i];
    
    for(j=i-1; j>=0;j--){
        if(a[j]>temp){
            a[j+1] = a[j];
            a[j]=temp;
        }
    }
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}

void main() {
        int n, a[10] ,choice,i ,j ,temp ;

    printf("enter the no of elements");
    scanf("%d",&n);
     printf("enter the array element");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("enter the choice\n")  ;
    printf("1. insertion sort with function \n2.insertion sort without function \n") ;
    scanf("%d",&choice);
    switch(choice) {

    case 1:
    insertionsort(n ,a);
    break;

    case 2:
    for(i=1 ;i<n ;i++){
        temp = a[i];
        for(j=i-1 ;j>=0;j--){
            if(a[j]>temp){
                a[j+1] = a[j];
                a[j]=temp;
            }

        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    break;
    default :
    printf("invalid coice");

    }
}

