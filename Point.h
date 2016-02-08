// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;  // z adds the third deminsion point 

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z); // z is added as the thrid argument // two argument constructor 
    
    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ); // mutator z was addded to the mutator methods
    
    double distanceTo(const Point &other) const; // non member function

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const; // accessor method for Z
    
};

#endif // __POINT_H
