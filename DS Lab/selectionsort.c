#include<stdio.h>
void selectionsort(int a[] ,int n){
    int i , min  , j, temp  ;
    for(i=0; i<n-1 ; i++){
        min = i;
    }
    for(j=i+1 ;j< n;j++){
        if(a[j]<a[min]){
            min =j;
        }
        
    }
    if(min != i){
            temp=a[j];
            a[j] = a[min];
            a[min] = temp;
        }
}

int main(){
    int n , a[50] ,choice ,i ,min ,temp  ,j;;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array element");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("enter the choice\n")  ;
    printf("1. selection sort with function \n2.selection sort without function \n") ;
    scanf("%d",&choice);

    switch(choice){
        case 1 :
        selectionsort(a ,n);
        printf("sortedd arrays\n");
        for(i=0;i<n;i++){
            printf("\t%d",a[i]);
        }
        break;

        case 2 :
        
        
         for(i=0; i<n-1 ; i++){
        min = i;
    }
    for(j=i+1 ;j<n;j++){
        if(a[j]<a[min]){
            min =j;
        }
        
    }
    if(min != i){
            temp=a[j];
            a[j] = a[min];
            a[min] = temp;
        }
        printf("sortedd arrays\n");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
        break;
        default :
        printf("invalid choice");
    }
}

