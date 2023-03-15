#include <stdio.h>

int main()
{
    int i, n;
    float arr[100], temp;

    printf("Toplam eleman sayisini girin: ");
    scanf("%d", &n);
    printf("\n");

    
    for(i = 0; i < n; ++i)  // 
    {
       printf(" Sayiyi Girin %d: ", i+1);
       scanf("%f", &arr[i]);
    }

   
    for(i = 1; i < n; ++i)
    {

       if(arr[0] > arr[i]) 
       {
           temp = arr[0];
           arr[0] = arr[i];
           arr[i] = temp;
       }
          
    }
    printf(" En kucuk eleman =  %.f", arr[0]);

    return 0;
}
