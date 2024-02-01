
#include <stdio.h>
int main() {
   int n,count=0;
   printf("enter element:");
   scanf("%d",&n);
    int arr[n];
    int b[n];
      for (int i = 0; i < n; i++) {
            printf("enter element %d:",i+1);
            scanf("%d",&arr[i]);
    }


    for (int i = 0; i < n; i++)
        {
            count=1;
            if (arr[i] != -1)
                {
            for (int j = i + 1; j < n; j++)
            {
              if (arr[i] == arr[j])
              {
                count++;
                arr[j] = -1;
              }
            }
                b[i]=count;
            }
    }
       for(int i=0;i<n;i++)
        {
       if(arr[i]!=-1)
     {


        printf("%d occurs %d times\n", arr[i],b[i]);
    }
       }
     return 0;
}

