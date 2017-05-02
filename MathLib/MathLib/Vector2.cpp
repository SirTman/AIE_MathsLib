#include "Vector2.h"



Vector2 v2()
{
	Vector2 v2;
	v2.x = 0;
	v2.y = 0;
}
Vector2 v2(float x, float y)
{
	Vector2 v2;
	v2.x = x;
	v2.y = y;
}

//Vectors V = V + V
Vector2 Add(const Vector2& a_first, const Vector2& a_second)
{
	Vector2 ANSW = {};
	ANSW.x = a_first.x + a_second.x;
	ANSW.y = a_first.y + a_second.y;
	return ANSW;
}
//V = V - V
Vector2 Subtract(const Vector2& a_first, const Vector2& a_second)
{
	Vector2 ANSW = {};
	ANSW.x = a_first.x - a_second.x;
	ANSW.y = a_first.y - a_second.y;
	return ANSW;
}
//V = V x f
Vector2 Multiply(const Vector2& a_point, float a_scalar)
{
	Vector2 ANSW = {};
	ANSW.y = a_point.y * a_scalar;
	ANSW.x = a_point.x * a_scalar;
	return ANSW;
}

Vector2 Divide(const Vector2& a_point, float a_scalar)
{
	Vector2 ANSW = {};
	ANSW.y = a_point.y / a_scalar;
	ANSW.x = a_point.x / a_scalar;
	return ANSW;
}
