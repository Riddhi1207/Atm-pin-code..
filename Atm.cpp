#include <stdio.h>

int main(){

   int correct_pin = 1432;
   int pin;
   int i;
   int attempts = 3;
  
   for(i = 1; i <= attempts; i++){
       printf("Enter your ATM PIN: ");
       scanf("%d",&pin);
 
       if(pin == correct_pin) {
           printf("Transaction Successful \n");
           break;
       } else {
            printf("Incorrect PIN \n");
   
            if(i == attempts) {
                printf("Card blocked for 24 hours \n");
            } else {
               printf("Attempts left: %d\n", attempts - i);
            }
       }
   }
   
    return 0;
 }