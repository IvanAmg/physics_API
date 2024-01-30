#include "physics.c"    

/*-------------------------------------------------------
*   Basic physics API 
*
*   This API contains basic mechanics formulas for constant linear speed and acceleration
*
----------------------------------------------------------*/
// Infinite error handling
void inferror(void);

//linear speed, if time = 0, program will exit with error
double linearSpeed(double distance, double time);

// Obtaining distance with constant linear velocity
double linearDistance(double time, double velocity);

// Obtaining distance with constant linear velocity
double acceleration(double vo, double vf, double time);

// Obtaining initial velocity using acceleration
double initialvAcceleration(double acceleration, double time, double vf);

// Obtaining final velocity using acceleration
double finalvAcceleration(double acceleration, double time, double vo);
