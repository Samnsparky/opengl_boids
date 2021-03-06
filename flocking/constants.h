/**
 * Name: constants.h
 * Desc: Constants for boid flocking behavior.
 * Auth: Sam Pottinger
 * Licn: GNU GPL v2
**/

#ifndef BOID_FLOCKING_CONSTANTS
#define BOID_FLOCKING_CONSTANTS

#define MAX_BOID_SPEED 3
#define MAX_BOID_FORCE 0.05
#define START_BOID_ANGLE 3

#define SEPERATION_WEIGHT 1.5
#define ALIGN_WEIGHT 1.0
#define COHESION_WEIGHT 1.0

#define DESIRED_SEPERATION 25
#define DESIRED_SEPERATION_WALL 150
#define DESIRED_SEPERATION_OBS 250

#define MAX_NEIGHBOR_DISTANCE 50

#define BOID_MIN_X -400
#define BOID_MAX_X 400
#define BOID_MIN_Y 50
#define BOID_MAX_Y 400
#define BOID_MIN_Z -400
#define BOID_MAX_Z 400

#define MATH_PI 3.1415926535897
#define IN_SIGHT_MIN -1.96349540849
#define IN_SIGHT_MAX 1.96349540849

#define FALSE 0
#define TRUE 1

#endif