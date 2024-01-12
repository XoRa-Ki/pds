#include "marker.h"
#include "stdbool.h"

#ifndef YEL_PIKMIN_H
#define YEL_PIKMIN_H

typedef struct yel_pikmin
{
    char resistance[5] = "elec" ;
    int dmg_output = 10 ; /*Average*/
    int mobility = 10 ; /*Average*/
    int throw_height_value = 107 ; /*High*/
    int digging_speed = 1 ; /*Average, multiplier*/
    int carrying_capacity = 1 ;

    marker ypik_mark ;
    bool yfollowing_cap ;

} ;

#endif /*YEL_PIKMIN_H*/