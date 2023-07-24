#include <stdio.h>
#include <stdbool.h>

void main(){
  int number = 12345;
  int result  = 0;

  while (true){

    if(number != 0){
        result = result + number % 10;
        number = number/10;
      
    }
   else{
       printf("sum of numbers is %d",result);
       break;
  }
}
