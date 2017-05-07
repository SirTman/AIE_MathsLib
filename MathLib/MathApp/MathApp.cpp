// MathApp.cpp : Defines the entry point for the console application.
//
#include "Utility.h"
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"

#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

#include <iostream>

/*
V = V + V (point translated by a vector)
V = V – V (point translated by a vector)
V = V x f (vector scale)
V = f x V (vector scale)
V = M x V (vector transformation)
M = M x M (matrix concatenation)
f = V.dot( V )
V = V.cross( V ) (not needed for Vector2)
f = V.magnitude()
V.normalise()
f = V[n] (sub-script operator)
V = M[n] (sub-script operator)
V[n] = f (sub-script operator returning reference)
M[n] = V (sub-script operator returning reference)
float* fp = (float*)V (cast operator)
float* fp = (float*)M (cast operator)
M.setRotate( f ) (for Matrix2)
M.setRotateX( f ) and M.setRotateY( f ) and M.setRotateZ( f ) (for Matrix3 and Matrix4)
*/

int main()
{
	//std::cout << add(10, 5) << std::endl; 
	//Vector2 test = Add(v2(1, 2), v2(1, 2));
	//std::cout << test;
	
	system("pause");
	return 0;
}

