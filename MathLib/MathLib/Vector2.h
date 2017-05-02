#pragma once

//Basic
int add(int a, int b);
int sub(int a, int b);


//Vectors
struct Vector2
{
	float x;
	float y;
};
Vector2 v2();
Vector2 v2(float x,float y);

Vector2 Add(const Vector2& a_first, const Vector2& a_second);
Vector2 Subtract(const Vector2& a_first, const Vector2& a_second);

Vector2 Multiply(const Vector2& a_point, float a_scalar);
Vector2 Divide(const Vector2& a_point, float a_scalar);