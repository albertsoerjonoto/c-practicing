/* This program computes the duration of flight and the height
 * above the target of a projectile. */

#include <stdio.h>
#include <math.h>
#define G 9.81


/* Prototypes */
void instruct(void);
double flighttime (double dist, double vel, double theta);
double flightht (double vel, double theta, double time);

int main(void)
{
    double theta, dist, vel, time, height;
    printf("Input the angle of elevation        : ");scanf("%lf",&theta);
    printf("Input the distance to the target    : ");scanf("%lf",&dist);
    printf("Input the velocity of projectile    : ");scanf("%lf",&vel);

    instruct();
    flighttime(dist,vel,theta);

    return 0;
}

/* This function displays a set of user instructions. */
void instruct(void)
{
    printf("\nWrite a program that computes the duration of a projectile’s flight and its height above the \nground when it reaches the target. As part of your solution write and call\n");
    printf("i) a function, instruct, that displays instructions to the program user,\n");
    printf("ii) a function, flighttime, that calculates the time of flight and\n");
    printf("iii) a function, flightht, that calculates the height. \n\n");
}

 /* This function calculates the flight time. */
double flighttime (double dist, double vel, double theta)
{
    double time;
    time=dist/(vel*cos(theta));
    printf("Duration of flight     : %lf\n",time);
    flightht (vel,theta,time);
}

/* This function calculates the height. */
double flightht (double vel, double theta, double time)
{
    double height;
    height=vel*sin(theta)*time-(G*time*time/2);
    printf("Height above target    : %lf\n",height);
}
