#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate) {

   int temp_candidate = candidate; 
   int armstrong_check = 0;
   int counter = 0;
   int length_candidate = floor(log10(temp_candidate)) + 1; // Count digits.
   
   //simple check for 0 (0 not suitable for length_candidate variable)
   if (temp_candidate == 0) {
      return true;
   }
   
   //declare an array with proper length. 
   int single_int_holder [length_candidate];
  
  //while loop puts digits in array. % 10 calculates rightmost digit. 
  //It is then divided by 10 to iterate to next digit. 
   while(temp_candidate > 0) {
      single_int_holder[counter] = temp_candidate % 10;
      temp_candidate /= 10;
      counter++;
   }
   
   //power of number length for each digit summed up.
   for(int i = 0; i < length_candidate; i++){
      armstrong_check += pow(single_int_holder[i], length_candidate); 
   }
   
   return armstrong_check == candidate;
}
