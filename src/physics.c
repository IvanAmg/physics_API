#include <stdlib.h>


void inferror (void){

    perror("Time must be different than 0\n");
    exit(-1);
}

double linearSpeed(double distance, double time){
    
    if (time == 0)
        inferror();

    return (distance/time);
}

double linearDistance(double time, double velocity){

    return(time*velocity);
}

double acceleration(double vo, double vf, double time){
    
    if (time == 0)
        inferror();

    return((vo - vf)/time);
}

double initialvAcceleration(double acceleration, double time, double vf){

    return((acceleration*time) + vf);
}

double finalvAcceleration(double acceleration, double time, double vo){

    return(vo - (acceleration*time));
}
