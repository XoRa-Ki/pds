#include <stdbool.h>

#ifndef MARKER_H
#define MARKER_H

typedef struct marker
{
    int marker_id ;
    int neighbours ;
    int x_abs ; /*abscissa, x axis*/
    int y_ord ; /*ordinate, y axis*/
    int z_app ; /*applicate, z axis*/
    int terrain_type ;
    bool b_block ;
    int cond_block ;
} ;

#endif /*MARKER_H*/