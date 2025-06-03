#include<stdio.h>
void bubblesort(int a[] ,int n){
    int i , j , temp ;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    int n, a[10] ,choice,i ,j ,temp ;

    printf("enter the no of elements");
    scanf("%d",&n);
     printf("enter the array element");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("enter the choice\n")  ;
    printf("1. bubble sort with function \n2.bubble sort without function \n") ;
    scanf("%d",&choice);

    switch(choice){
        case 1 :
        bubblesort(a ,n);
        printf("sortedd arrays\n");
        for(i=0;i<n;i++){
            printf("\t%d",a[i]);
        }
        printf("\n");
        break;

        case 2 :
        for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
        printf("sortedd arrays\n");
        for(i=0;i<n;i++){
            printf("\t%d",a[i]);
        }
        printf("\n");

}
}