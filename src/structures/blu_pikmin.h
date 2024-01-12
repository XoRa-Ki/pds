#include "marker.h"
#include "stdbool.h"

#ifndef BLU_PIKMIN_H
#define BLU_PIKMIN_H

typedef struct blu_pikmin
{
    char resistance[5] = "wate" ;
    int dmg_output = 10 ; /*Above average*/
    int mobility = 10 ; /*Average*/
    int throw_height_value = 72.5 ; /*Average*/
    int digging_speed = 1 ; /*Average, multiplier*/
    int carrying_capacity = 1 ;

    marker bpik_mark ;
    bool bfollowing_cap ;

} ;

#endif /*BLU_PIKMIN_H*/