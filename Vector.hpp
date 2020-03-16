#pragma once

class Vector3d
{
  
public:
    double x, y, z;

    Vector3d();
    Vector3d(double x = 0, double y = 0, double z = 0);
    Vector3d(const Vector3d& other);

    Vector3d operator +  (Vector3d const &other);
    void     operator += (Vector3d const &other);

    Vector3d operator -  (Vector3d const &other);
    void     operator -= (Vector3d const &other);

    Vector3d operator *  (double f);
    void     operator *= (double f);
};
