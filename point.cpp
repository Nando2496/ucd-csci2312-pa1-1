#include <stdio.h>  
#include <cmath>  
#include "Point.h"  


// constructors
Point::Point()
{
	x=0;
	
	y=0;
	
	z=0;
	
 } 
  
Point::Point(double X, double Y, double Z)
{
	setX(x);
	
	setY(y);
	
	setZ(z);
	
}

void Point::setX(double newX)  
{  
	x = newX;  
}  
 
void Point::setY(double newY)  
 {  
 	y = newY;  
 }  
 
void Point::setZ(double newZ)  
{  
	z = newZ;  
}  
 
double Point::getX() const  
{  
	return x;  
}  

double Point::getY() const  
{  
	return y;  
}  

double Point::getZ() const  
{  
	return z;  
}


double Point::distanceTo(const Point &other) const
{
	return sqrt(pow(x-other.getX(), 2) + pow(y-other.getY(), 2) + pow(z-other.getZ(), 2)); 
}
