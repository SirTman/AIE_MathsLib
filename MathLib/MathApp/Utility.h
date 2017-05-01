#pragma once

//Basic
int add(int a, int b);
int sub(int a, int b);


//Vectors
struct Vector3
{
	float x;
	float y;
	float z;
};

Vector3 Add(const Vector3& a_first, const Vector3& a_second);
Vector3 Subtract(const Vector3& a_first, const Vector3& a_second);

Vector3 Multiply(const Vector3& a_point, float a_scalar);
Vector3 Divide(const Vector3& a_point, float a_scalar);

class Utility
{
public:
	Utility();


	
	~Utility();
};

float addM(float M[1][1]);