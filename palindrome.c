/*for a five digit number write a program to obtain the reversed number and to determine whether the original and reversed number are equal or not*/


#include <stdio.h>
#include <stdbool.h>

void main(){

  int number,x;
  x = number = 12345;
  int result = 0;

  while (true){

    if (number !=0){

      result = result*10+number%10;
      number = number/10;
                    }
    else{
        ( result == x)? printf("it is a palindrome of digit"): printf("not a palindrome of digit");
      
         }
    }
} 
