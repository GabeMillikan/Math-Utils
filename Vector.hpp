#pragma once
#include <stdint.h>

class Vector3d
{
  
public:
  double x, y, z;

  // Constructors (for the love of god can someone PLEASE explain how to template this)
  void Init(double x, double y, double z);

  Vector3d(Vector3d other);

  Vector3d(double x = 0, double y = 0, double z = 0);
  Vector3d(float x = 0, float y = 0, float z = 0);
  
  Vector3d(uint8_t x, uint8_t y = 0, uint8_t z = 0);
  Vector3d(uint16_t x = 0, uint16_t y = 0, uint16_t z = 0);
  Vector3d(uint32_t x = 0, uint32_t y = 0, uint32_t z = 0);
  Vector3d(uint64_t x = 0, uint64_t y = 0, uint64_t z = 0);

  Vector3d(int8_t x = 0, int8_t y = 0, int8_t z = 0);
  Vector3d(int16_t x = 0, int16_t y = 0, int16_t z = 0);
  Vector3d(int32_t x = 0, int32_t y = 0, int32_t z = 0);
  Vector3d(int64_t x = 0, int64_t y = 0, int64_t z = 0);


  // operators
  void     operator =  (Vector3d const &other);
  
  Vector3d operator +  (Vector3d const &other);
  void     operator += (Vector3d const &other);
  
  Vector3d operator -  (Vector3d const &other);
  void     operator -= (Vector3d const &other);

  Vector3d operator *  (double f); // how tf do i template an operator?
  void     operator *= (double f);
  Vector3d operator *  (float f);
  void     operator *= (float f);
  Vector3d operator *  (uint8_t f);
  void     operator *= (uint8_t f);
  Vector3d operator *  (uint16_t f);
  void     operator *= (uint16_t f);
  Vector3d operator *  (uint32_t f);
  void     operator *= (uint32_t f);
  Vector3d operator *  (uint64_t f);
  void     operator *= (uint64_t f);
  Vector3d operator *  (int8_t f);
  void     operator *= (int8_t f);
  Vector3d operator *  (int16_t f);
  void     operator *= (int16_t f);
  Vector3d operator *  (int32_t f);
  void     operator *= (int32_t f);
  Vector3d operator *  (int64_t f);
  void     operator *= (int64_t f);
  

  // other
  template <class T>
  double convert(T value);
};
