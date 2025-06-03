#include <stdio.h>
void selectionsort(int a[] , int size){
    int i, j ,temp ,min  ;
    for(i=0;i<size-1 ; i++){
        min =i;
        for(j =i+1 ;j<size ; j++){
            if (a[min]>a[j]){
                min =j;
            }
    }
    if(min!=i){
        temp=a[i];
        a[i]=a[min];
        a[min]=temp ;
    }

}
}

int binarysearch(int a[], int size, int value){
    int low =0, high =size-1, mid ,key ;
    while(low<=high){
        mid=(low+high)/2;
        if (key == a[mid]){
            return mid;
        }
        else if (key < a[mid] ){
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

void main(){
    int size ,a[10] ,i ,value , index ,mid;

    printf("enter the size of araray");
    scanf("%d",&size);
    printf("entrer the array elements");
    for(i=0;i<size;i++){
    scanf("%d",&a[i]);
    }
    selectionsort(  a , size);
    printf("sorted array is \n");
    for(i=0;i<size;i++){
        
    printf(" %d\n",a[i]); 
    }

    printf("enter the value to search");
    scanf("%d",&value);

    binarysearch( a , size , value);
    if(index == -1){
        printf("elemet not found");
    }
    else{
        printf("element found at index %d\n", index+1);
    }

}