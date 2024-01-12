#include <stdbool.h>

#ifndef MARKER_H
#define MARKER_H

typedef struct marker
{
    int marker_id ;
    int neighbours[5] ; /*5 nieghbours max in the current test map (tropical forest)*/
    int pikmins[3] ; /*0 : red, 1 : yellow, 2 : blue*/

    int coord[3] ; /* 0 : abscissa (x axis) ; 1 : ordinate (y axis) ; 2 : applicate (z axis)*/

    char terrain_type[4] ;

    bool b_block ;
    char cond_block[4] ;
} ;

#endif /*MARKER_H*/