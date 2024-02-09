#include<stdio.h>
int main()
{
    int n,i,m,index=0;
    printf("enter size1=");
    scanf("%d",&n);
     printf("enter size2=");
    scanf("%d",&m);

    int arr1[n];
     int arr2[m];
     int marge[m+n];
     printf("\n\narray1 :");
    for(i=0;i<n;i++){
        printf("\nenter element %d:",i+1);
        scanf("%d",&arr1[i]);
    }
     printf("\n\narray2 :");
      for(i=0;i<m;i++){
        printf("\nenter element %d:",i+1);
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<n;i++){
            marge[index++]=arr1[i];
    }
     for(i=0;i<m;i++){
            marge[index++]=arr2[i];
    }
     for(i=0;i<m+n;i++){
           printf("%d ",marge[i]);
    }



}
