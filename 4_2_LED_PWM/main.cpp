#include "mbed.h"
#define pi 3.1415926

PwmOut PWM(D6);

int main()
{
    double rad;
    while (1)
    {
        for (float i = 0; i < 360; i += 0.5)
        {
            rad = double(i) * pi / 180;
            PWM.period_ms(3);
            PWM = 0.5 * sin(rad) + 0.5;
            ThisThread::sleep_for(5ms);
        }
    }
}