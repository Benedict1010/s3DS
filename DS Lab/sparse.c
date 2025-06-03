#include<stdio.h>
void sparse(int a[10][10],int c[20][3],int m,int n)
{ int i,j,k=1;
  printf("Enter the elements\n");
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    { scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    { if(a[i][j]!=0)
      { c[k][0]=i;
        c[k][1]=j;
        c[k][2]=a[i][j];
        k++;
      }
    }
  }
  c[0][0]=m;
  c[0][1]=n;
  c[0][2]=k-1;
}
void addsparse(int a[10][3],int b[10][3],int c[10][3])
{ int m=a[0][2],n=b[0][2],i=1,j=1,k=1;
  if(a[0][0]==b[0][0] && a[0][1]==b[0][1])
  { while(i<m && j<n)
    { if(a[i][0]==b[j][0] && a[i][1]==b[j][1])
      { c[k][0]=a[i][0];
        c[k][1]=b[j][1];
        c[k][2]=a[i][2]+b[j][2];
        i++;
        j++;
        k++;
      }
      else if(a[i][0]==b[j][0])
      { if(a[i][1]<b[j][1])
       { c[k][0]=a[i][0];
         c[k][1]=a[i][1];
         c[k][2]=a[i][2];
         i++;
         k++;
       }
       else
       { c[k][0]=b[j][0];
         c[k][1]=b[j][1];
         c[k][2]=b[j][2];
         j++;
         k++;
       }
      }
      else if(a[i][0]<b[j][0])
      { c[k][0]=a[i][0];
        c[k][1]=a[i][1];
        c[k][2]=a[i][2];
        i++;
        k++;
      }
      else
      { c[k][0]=b[j][0];
        c[k][1]=b[j][1];
        c[k][2]=b[j][2];
        j++;
        k++;
      }
    }
    while(i<m)
    { c[k][0]=a[i][0];
      c[k][1]=a[i][1];
      c[k][2]=a[i][2];
      i++;
      k++;
    }
    while(j<n)
    { c[k][0]=b[j][0];
      c[k][1]=b[j][1];
      c[k][2]=b[j][2];
      j++;
      k++;
    }
    c[0][0]=a[0][0];
    c[0][1]=a[0][1];
    c[0][2]=k-1;
  }
   else
  { printf("Addition not possible\n");
  }
}
void main()
{ int i,j,a[10][10],b[20][3],c[20][3],m,n;
  printf("Enter no of rows and columns\n");
  scanf("%d %d",&m,&n);
  printf("For first matrix\n");
  sparse(a,b,m,n);
  printf("\nFirst matrix is\n");
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    { printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("sparse of first matrix\n");
  for(i=0;i<=b[0][2];i++)
  { printf("%d %d %d\n",b[i][0],b[i][1],b[1][2]);
  }
  printf("For second matrix\n");
  sparse(a,c,m,n);
  printf("\nsecond matrix\n");
  for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
    { printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("sparse of second matrix\n");
  for(i=0;i<=c[0][2];i++)
  { printf("%d %d %d\n",c[i][0],c[i][1],c[i][2]);
  }
  int result[20][3];
  addsparse(b,c,result);
  printf("sparse of resultant matrix\n");
  for(i=0;i<=result[0][2];i++)
  { printf("%d %d %d\n",result[i][0],result[i][1],result[i][2]);
  }
}

