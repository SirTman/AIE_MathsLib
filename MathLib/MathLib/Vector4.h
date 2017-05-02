#pragma once
//Vectors
struct Vector4
{
	float x;
	float y;
	float z;

	float w;
};

Vector4 v4();
Vector4 v4(float x, float y, float z, float w);

Vector4 Add(const Vector4& a_first, const Vector4& a_second);
Vector4 Subtract(const Vector4& a_first, const Vector4& a_second);

Vector4 Multiply(const Vector4& a_point, float a_scalar);
Vector4 Divide(const Vector4& a_point, float a_scalar);

