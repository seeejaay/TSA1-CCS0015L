#include "Array1D.h"
#include <iostream>

Array1D::Array1D(int Arraycap)
{
	capacity = Arraycap;
	size = 0;
	array = new int[capacity];
}
int Array1D::GetSize()
{
	return size;
}

bool Array1D::isEmpty() const
{
	return size == 0;
}

bool Array1D::isFull() const
{
	return size == capacity;
}

void Array1D::InsertItem(int pos, int val)
{
	if (isFull())
	{
		std::cout << "Array is full!" << std::endl;
		return;
	}
	if (pos < 0 || pos > size)
	{
		std::cout << "Invalid position!" << std::endl;
		return;
	}
	for (int i = size - 1; i >= pos; i--)
	{
		array[i + 1] = array[i];
	}
	array[pos] = val;
	size++;
}

void Array1D::RemoveItem(int pos)
{
	if (isEmpty())
	{
		std::cout << "Array is empty!" << std::endl;
		return;
	}
	if (pos < 0 || pos >= size)
	{
		std::cout << "Invalid position!" << std::endl;
		return;
	}
	for (int i = pos; i < size - 1; i++)
	{
		array[i] = array[i + 1];
	}
	size--;
}

void Array1D::AddItem(int val)
{
	if (isFull())
	{
		std::cout << "Array is full!" << std::endl;
		return;
	}
	array[size] = val;
	size++;
}

void Array1D::DisplayElements()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}