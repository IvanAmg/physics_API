#include<stdio.h>
#include "../src/physics.h"


void main(){

    double d;
    double t;

    d = 21.0;
    t = 10;

    printf("La velocidad es de %f m/s", linearSpeed(d, t));

}
