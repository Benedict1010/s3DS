#include <stdio.h>
void main(){
    int a[50], value , n,  i ,index;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of array" );
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enterr the element to search");
    scanf("%d",&value);
    for(i=0;i<n;i++){
        if(a[i]==value){

            index=1;
            break;
        }}
        if(index==1){
            printf("element found at index %d", i);

        }
        else {
            printf("element not found ");
        }
    }
