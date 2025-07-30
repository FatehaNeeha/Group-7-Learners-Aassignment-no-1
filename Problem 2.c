#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14159

int main()
{
    double m_r, lemda_r, theta_r, w_r;
    double m_g, lemda_g, theta_g, w_g;
    m_r=2;
    m_g=3;
    w_r= 700;
    w_g= 530;
    theta_g=65;

    double sin_theta_g=sin( theta_g*pi/180 );

    double sin_theta_r = (m_r *w_r* sin_theta_g) /  (m_g *w_g );

    theta_r = asin( sin_theta_r)*180/pi;


     printf("**Third-oder bright spot for green-light \n");
     printf("For third-oder, m_g : 3 \n");
     printf("Wavelength for green light , w_g : 530nm \n");
     printf("Angle form the central maximum for green light, theta_g : %lf degree \n\n\n", theta_g);

     printf("**Second-oder bright spot for red-light \n");
     printf("For second-oder, m_r : 2\n", m_r);
     printf("Wavelength for red light , w_r : 700nm \n\n\n");

     printf("**Answer : \n");
     printf("Angle form the central maximum for red light, theta_r :  %.2lf degree\n", theta_r);

    return 0;
}
