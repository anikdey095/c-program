 #include<stdio.h>
 int main()
 {

 int i,n;

    printf("how many numbers=");
    scanf("%d",&n);
   int arr[n];

   for(i=0;i<n;i++)
    {
      printf("Enter element %d: ", i + 1);
       scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
     printf("maximum=%d\n",max);
     printf("minimum=%d\n",min);
}
