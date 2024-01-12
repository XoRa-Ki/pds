#include <stdbool.h>

#ifndef MARKER_H
#define MARKER_H

typedef struct marker
{
    int marker_id ;
    int neighbours[6] ; /*5 neighbours max in the current test map (tropical forest)*/
    int pikmins[4] ; /*0 : red, 1 : yellow, 2 : blue*/

    int coord[4] ; /* 0 : abscissa (x axis) ; 1 : ordinate (y axis) ; 2 : applicate (z axis)*/

    char terrain_type[4] ;

    bool b_block ;
    char cond_block[4] ;
} ;

#endif /*MARKER_H*/