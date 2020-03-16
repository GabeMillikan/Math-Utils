#include "Vector.hpp"

Vector3d::Vector3d()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector3d::Vector3d(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector3d::Vector3d(const Vector3d& other)
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
}

Vector3d Vector3d::operator + (Vector3d const &other)
{
    Vector3d res(this->x + other.x, this->y + other.y, this->z + other.z);
    return res;
}

void Vector3d::operator += (Vector3d const &other)
{
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
}

Vector3d Vector3d::operator - (Vector3d const &other)
{
    Vector3d res(this->x - other.x, this->y - other.y, this->z - other.z);
    return res;
}

void Vector3d::operator -= (Vector3d const &other)
{
    this->x -= other.x;
    this->y -= other.y;
    this->z -= other.z;
}

Vector3d Vector3d::operator * (double f)
{
    Vector3d res(this->x *f , this->y * f, this->z * f);
    return res;
}

void Vector3d::operator *= (double f)
{
    this->x *= f;
    this->y *= f;
    this->z *= f;
}
