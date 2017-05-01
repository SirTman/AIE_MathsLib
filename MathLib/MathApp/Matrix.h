#pragma once
#include "iostream"

template <class T>
class Matrix
{
public:
	Matrix(int rows, int colums)
	{
		setRows(rows);
		setColums(colums);

		table = new T*[rows];
		for (int i = 0; i < row; i++) 
		{
			table[i] = new T[colums];
		}
		
		for (int i = 0; i < row; i++)
		{
			for(int ii = 0; ii < colums; ii++)
				table[i][ii] = (T) i * ii;
		}
	}

	void setRows(int NUMrow) { row = NUMrow; }
	void setColums(int NUMcolums) { colums = NUMcolums; }
	~Matrix();
};

