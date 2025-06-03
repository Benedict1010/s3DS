#include<stdio.h>

int readPoly(int poly[][2], int deg){
    int i=0;
    
    for(i=deg ;i>=0; i--){
        poly[i][1] =i;
        printf("enter the coefficient of x^ %d \t" ,i );
        scanf("%d",&poly[i][0]);
    }

}

int printPoly(int poly[][2], int deg){
      int i;
      for(i=deg ;i >=0 ; i--){
        printf("%d x^ %d",poly[i][0],poly[i][1] );
        if(i!=0){
            printf("+");
        }
      }

}

int addpoly(int a[][2],int b[][2] ,int ans[][2] ,int n ,int m ){
    int i =0 ,j=0  ,k =0;
    while(i<=m && j<=n)
    {
    if(a[i][1]==b[j][1]){
        ans[k][0] = a[i][0] + b[j][0];
        ans[k][1] = a[i][1] ;
        i++;
        j++;
        k++;
    }

    else if(a[i][1]>b[j][1]){
        ans[k][0] =a[i][0];
        ans[k][1] =a[i][1];
        i++;
        k++;
    }
}
if(i<=m){
    for( ; i<=m ;i++){
        ans[k][0]=a[i][0];
        ans[k][1]=a[i][1];
    k++;
    }
}

if(j<=n){
    for(; j<=n ;j++){
        ans[k][0]=b[j][0];
        ans[k][1]=b[j][1];
        k++;
    }
}
return k-1;
}


void main(){
    int deg1 ,deg2 , choice, degsum =0;
    int poly1[10][2], poly2[10][2] ,sum[10][2]  ;

    printf("enter the degree of first polynomial");
    scanf("%d", &deg1);
    readPoly(poly1,deg1);

    printf("enter the degree of second polynomial");
    scanf("%d", &deg2);
    readPoly(poly2,deg2);

    printf("enter the choice \n 1. display both equation \n  2. display sum");
    scanf("%d",&choice) ;

    switch(choice) {
        case 1:
        printf("\n first equation");
        printPoly(poly1 ,deg1);
        printf("\n second equation");
        printPoly(poly2 ,deg2);
        break;

        case 2:
        printf("sum of equations \n");
        degsum = addpoly(poly1,poly2,sum,deg1,deg2);
        printPoly(poly1 ,deg1);
        printf("+ \n");
        printPoly(poly2 ,deg2);
        printf("\n");
        printf("=");
        printPoly(sum ,degsum);
        printf("\n");
        break;
    }

}