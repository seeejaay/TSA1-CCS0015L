#ifndef ARRAY1D_H
#define ARRAY1D_H
class Array1D
{	
private:
	int capacity;
	int size;
	int* array;
public:
	Array1D(int Arraycap = 10);
	~Array1D() { delete[] array; }
	int GetSize();
	bool isEmpty() const;
	bool isFull() const;
	void InsertItem(int pos, int val);
	void RemoveItem(int pos);
	void AddItem(int val);
	void DisplayElements();

};
#endif
