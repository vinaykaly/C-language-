// find maximum and minimum vallue in a array usings pointers


#include <stdio.h>

void minmax(int arr[],int *p,int *q,length)
{      // p---> min, q--->max

      *p = *q = arr[0]

      for(int i = 1 ; i<length; i++)
  {

        if(arr[i] < *p)
        {
           *p = arr[i];
        }

        if(arr[i] > *q)
        {

          *q = arr[i];
        }
  }
}


void main()
{

  int min,max;

  int a[] = {23,4,21,98,987,45,32,10,123,986,50,3,4,5};


  int len = sizeof(a)/sizeof(a[0]);

  minmax(a,&min,&max,len);

  printf("min: %d\nmax: %d",min,max);
  
}

   
