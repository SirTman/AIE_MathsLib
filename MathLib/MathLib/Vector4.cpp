#include "Vector4.h"

Vector4 v4()
{
	Vector4 v4;
	v4.x = 0;
	v4.y = 0;
	v4.z = 0;
	v4.w = 0;
}
Vector4 v4(float x, float y, float z, float w)
{
	Vector4 v4;
	v4.x = x;
	v4.y = y;
	v4.z = z;
	v4.w = y;
}

//Vectors V = V + V
Vector4 Add(const Vector4& a_first, const Vector4& a_second)
{
	Vector4 ANSW = {};
	ANSW.x = a_first.x + a_second.x;
	ANSW.y = a_first.y + a_second.y;
	ANSW.z = a_first.z + a_second.z;
	
	ANSW.w = a_first.w + a_second.w;
	return ANSW;
}
//V = V - V
Vector4 Subtract(const Vector4& a_first, const Vector4& a_second)
{
	Vector4 ANSW = {};
	ANSW.x = a_first.x - a_second.x;
	ANSW.y = a_first.y - a_second.y;
	ANSW.z = a_first.z - a_second.z;

	ANSW.w = a_first.w - a_second.w;
	return ANSW;
}
//V = V x f
Vector4 Multiply(const Vector4& a_point, float a_scalar)
{
	Vector4 ANSW = {};
	ANSW.y = a_point.y * a_scalar;
	ANSW.z = a_point.z * a_scalar;
	ANSW.x = a_point.x * a_scalar;

	ANSW.w = a_point.w * a_scalar;
	return ANSW;
}

Vector4 Divide(const Vector4& a_point, float a_scalar)
{
	Vector4 ANSW = {};
	ANSW.y = a_point.y / a_scalar;
	ANSW.z = a_point.z / a_scalar;
	ANSW.x = a_point.x / a_scalar;

	ANSW.w = a_point.w / a_scalar;
	return ANSW;
}
