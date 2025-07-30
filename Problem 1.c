#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14159

int main()
{
    double m, d, theta, wavelength, colour;
    printf("Order number, m : ");
    scanf("%lf", &m);
    printf("Slite separation, d (in micro-meter): ");
     scanf("%lf", &d);
    printf("Angle form the central maximum, theta (in degree) : ");
    scanf("%lf", &theta);

    double sin_theta = sin( theta*pi/180 );

    double d_conv = d* pow(10, -6);

    wavelength= d_conv* sin_theta / m;

    double w = wavelength * pow(10, 9);

    printf("\n\n\nAnswer: \n");
    printf("a. The numeric value of the wavelength : %lf \n", w);

    if (w>=380 && w<450) {
        printf("b. The color of the light : violet.");
    }
     else  if (w>=450 && w<485) {
        printf("b. The color of the light : blue.");
    }
     else if (w>=485 && w<500) {
        printf("b. The color of the light : cyan");
    }
    else if (w>=500 && w<565) {
        printf("b. The color of the light : green");
    }
    else if (w>=565 && w<590) {
        printf("b. The color of the light : yelllow.");
    }
   else if (w>=590 && w<625) {
        printf("b. The color of the light : orange.");
    }
    else  if (w>=625 && w<=750) {
        printf("b. The color of the light : red.");
    }
    else{
        printf("b. The color of the light is out of visible range.");
    }


    printf("\n\n\n");

    return 0;




}

