 #include <stdio.h>

 int main(){
       int array[] = {10,20,30,40,50,60,70,80,90,100};
       int search = 100;

       int lower,upper,mid;
       lower = 0;
       upper = sizeof(array)/sizeof(array[0]) - 1;

       while(lower <=upper){
           mid =  (lower+upper)/2;

           if (array[mid] == search){
                 printf("found at %d",mid);
                 return 0;
           }
           else{

                if (search < array[mid]){
                     upper = mid - 1;
                }
                else{
                     lower = mid + 1;
                }
           }
       
       }
       printf("not found");
       return 0;
 }
