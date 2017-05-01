#include "Utility.h"

//Basic
int add(int a, int b)
{

	int ANSW = a + b;
	return ANSW;
}

int sub(int a, int b)
{

	int ANSW = a - b;
	return ANSW;
}

float addM(float M[1][1])
{
 
}


//Vectors V = V + V
Vector3 Add(const Vector3& a_first, const Vector3& a_second)
{
	Vector3 ANSW = {};
	ANSW.x = a_first.x + a_second.x;
	ANSW.y = a_first.y + a_second.y;
	ANSW.z = a_first.z + a_second.z;
	return ANSW;
}
//V = V - V
Vector3 Subtract(const Vector3& a_first, const Vector3& a_second)
{
	Vector3 ANSW = {};
	ANSW.x = a_first.x - a_second.x;
	ANSW.y = a_first.y - a_second.y;
	ANSW.z = a_first.z - a_second.z;
	return ANSW;
}
//V = V x f
Vector3 Multiply(const Vector3& a_point, float a_scalar)
{
	Vector3 ANSW = {};
	ANSW.y = a_point.y * a_scalar;
	ANSW.z = a_point.z * a_scalar;
	ANSW.x = a_point.x * a_scalar;
	return ANSW;
}

Vector3 Divide(const Vector3& a_point, float a_scalar)
{
	Vector3 ANSW = {};
	ANSW.y = a_point.y / a_scalar;
	ANSW.z = a_point.z / a_scalar;
	ANSW.x = a_point.x / a_scalar;
	return ANSW;
}

//Matrix


Utility::Utility()
{

}
Utility::~Utility()
{

}
