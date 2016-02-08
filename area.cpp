#include <stdio.h>  
#include <cmath>  
#include "Point.h"  


double computeArea(const Point &a, const Point &b, const Point &c)
{
double AB = a.distanceTo(b);  
double BC = b.distanceTo(c);  
double CA = c.distanceTo(a);  
         
double s = (AB + BC + CA) / 2;  
return sqrt(s * (s - AB) * (s - BC) * (s - CA));  
}
