#include "darts.h"
#include <math.h>

uint8_t score(coordinate_t landing_position){

   //calculate hypothenuse
   float point = sqrt(pow(landing_position.x, 2) + pow(landing_position.y, 2));
   
   //score board if/else
   if(point <= 1){
      return 10;
   }else if(point > 1 && point <= 5){
      return 5;
   }else if(point > 5 && point <= 10){
      return 1;
   }else return 0;
}
