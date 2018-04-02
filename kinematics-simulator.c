#include <stdio.h>
#define accel 9.8
int main(void)
{
    double time = 0, max_time, interval,
    acceleration = 9.8, velocity, distance;
    printf("Time Elapsed Distance Travelled\n" );
    printf("--------------------------------\n" );
    printf("Initial Velocity : ");
    scanf("%lf",&velocity);
    printf("Max Time : ");
    scanf("%lf",&max_time);
    printf("Interval : ");
    scanf("%lf",&interval);
    while (time <= max_time)
    {
       distance = velocity*time + 0.5*accel*time*time;
       printf("%8.2f %8.2f\n", time, distance);
       time = time + interval;
    }
    return 0;
}
