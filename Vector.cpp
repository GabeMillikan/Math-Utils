#include "Vector.hpp"

/*
 * CONSTRUCTORS
 */
void Vector3d::Init(double x, double y, double z)
{
  this->x = x;
  this->y = y;
  this->z = z;
}

Vector3d::Vector3d(Vector3d other){this->Init(other.x, other.y, other.z);}

Vector3d::Vector3d(double x, double y, double z){this->Init(x,y,z);}
Vector3d::Vector3d(float x, float y, float z){this->Init((double)x, (double)y, (double)z);}

Vector3d::Vector3d(uint8_t x, uint8_t y, uint8_t z){this->Init((double)x, (double)y, (double)z);}
Vector3d::Vector3d(uint16_t x, uint16_t y, uint16_t z){this->Init((double)x, (double)y, (double)z);}
Vector3d::Vector3d(uint32_t x, uint32_t y, uint32_t z){this->Init((double)x, (double)y, (double)z);}
Vector3d::Vector3d(uint64_t x, uint64_t y, uint64_t z){this->Init((double)x, (double)y, (double)z);}

Vector3d::Vector3d(int8_t x, int8_t y, int8_t z){this->Init((double)x, (double)y, (double)z);}
Vector3d::Vector3d(int16_t x, int16_t y, int16_t z){this->Init((double)x, (double)y, (double)z);}
Vector3d::Vector3d(int32_t x, int32_t y, int32_t z){this->Init((double)x, (double)y, (double)z);}
Vector3d::Vector3d(int64_t x, int64_t y, int64_t z){this->Init((double)x, (double)y, (double)z);}


/*
 * OPERATORS
 */
void Vector3d::operator = (Vector3d const &other)
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

//template <typename T>
//void Vector3d::operator*=<T>(T f)
//{
  
//}


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

Vector3d Vector3d::operator * (float f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (float f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}

Vector3d Vector3d::operator * (uint8_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (uint8_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}

Vector3d Vector3d::operator * (uint16_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (uint16_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}

Vector3d Vector3d::operator * (uint32_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (uint32_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}

Vector3d Vector3d::operator * (uint64_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (uint64_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}



Vector3d Vector3d::operator * (int8_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (int8_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}

Vector3d Vector3d::operator * (int16_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (int16_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}

Vector3d Vector3d::operator * (int32_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (int32_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}

Vector3d Vector3d::operator * (int64_t f)
{
  Vector3d res(this->x *f , this->y * f, this->z * f);
  return res;
}

void Vector3d::operator *= (int64_t f)
{
  this->x *= f;
  this->y *= f;
  this->z *= f;
}
