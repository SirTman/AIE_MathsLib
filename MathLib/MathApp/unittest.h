#pragma once

// YOUR INCLUDES HERE
//#include "Vector2.h" etc
//#include "Matrix4.h" etc
#include <Vector2.h>
#include <Vector3.h>
#include <Vector4.h>
#include <Matrix2.h>
#include <Matrix3.h>
#include <Matrix4.h>

typedef Vector2<float> Vector2f;
typedef Vector3<float> Vector3f;
typedef Vector4<float> Vector4f;
typedef Matrix2<float> Matrix2f;
typedef Matrix3<float> Matrix3f;
typedef Matrix4<float> Matrix4f;

// TYPEDEFS IF NEEDED
// typedef glm::vec2 Vector2; etc
// typedef glm::mat4 Matrix4; etc

// IF YOU GAVE YOUR CLASSES STREAM OPERATORS YOU CAN UNCOMMENT THIS
//#define NO_DEFAULT_STREAM_OPERATOR

// tests the following:

// Vector2: dot(V2), V2 + V2, V2 - V2, V2 x float, float x V2, magnitude(), normalise(), [], (float*)
// Vector3: dot(V3), cross(V3), V3 + V3, V3 - V3, V3 x float, float x V3, magnitude(), normalise(), [], (float*)
// Vector4: dot(V4), cross(V4), V4 + V4, V4 - V4, V4 x float, float x V4, magnitude(), normalise(), [], (float*)
// Matrix2: setRotate(float), M2 x V2, [], (float*)
// Matrix3: setRotateX(float), setRotateY(float), setRotateZ(float), M3 x V3, [], (float*)
// Matrix4: setRotateX(float), setRotateY(float), setRotateZ(float), M4 x V4, [], (float*)

// returns true if all tests successful
bool runUnitTests();