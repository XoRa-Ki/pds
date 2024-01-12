#include "marker.h"
#include "stdbool.h"

#ifndef RED_PIKMIN_H
#define RED_PIKMIN_H

typedef struct red_pikmin
{
    char resistance[5] = "fire" ;
    int dmg_output = 15 ; /*Above average*/
    int mobility = 10 ; /*Average*/
    int throw_height_value = 72.5 ; /*Average*/
    int digging_speed = 1.5 ; /*Above average, multiplier*/
    int carrying_capacity = 1 ;

    marker rpik_mark ;
    bool rfollowing_cap ;

} ;

#endif /*RED_PIKMIN_H*/