#include "marker.h"
#include "stdbool.h"

#ifndef TREASURE_H
#define TREASURE_H

typedef struct treasure
{
    int num_of_unit ;
    int value_per_unit ;

    int pik_needed_travel_per_unit ;

    marker tre_mark ; /* Localisation */
} ;

#endif /*TREASURE_H*/