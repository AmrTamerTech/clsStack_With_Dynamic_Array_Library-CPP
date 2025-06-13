#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
private:
	T* originalArray;
	T* tempArray;
protected:
	int size = 0;

public:
	clsDynamicArray(int Size = 0)
	{
		if (Size < 0) Size = 0;
		size = Size;
		originalArray = new T[size];
	}

	bool SetItem(int Index, T Value)
	{
		if (Index < 0 || Index >= size) return false;
		originalArray[Index] = Value;
		return true;
	}

	int Size () const
	{
		return size;
	}

	bool IsEmpty () const
	{
		return !size;
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0) NewSize = 0;
		int MinSize = (NewSize < size) ? NewSize : size;

		tempArray = new T[NewSize];
		for (int i = 0; i < MinSize; ++i)
		{
			tempArray[i] = originalArray[i];
		}
		delete[] originalArray;
		originalArray = tempArray;
		size = NewSize;
	}

	T GetItem(int Index)
	{
		if (Index >= size || Index < 0) throw out_of_range("Index Out Of Range");
		return originalArray[Index];
	}

	void Reverse()
	{
		tempArray = new T[size];
		
		for (int i = 0, j = size - 1; i < size; ++i, j--)
		{
			tempArray[i] = originalArray[j];
		}
		delete[] originalArray;
		originalArray = tempArray;
	}

	bool DeleteItemAt(int Index)
	{
		if (Index >= size || Index < 0) return false;
		size--;
		tempArray = new T[size];
		for (int i = 0, j = 0; i < size + 1; i++)
		{
			if (i == Index) continue;
			tempArray[j++] = originalArray[i];
		}
		delete[] originalArray;
		originalArray = tempArray;
		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		DeleteItemAt(size - 1);
	}

	int Find(T Value)
	{
		for (int i = 0; i < size; ++i)
		{
			if (originalArray[i] == Value) return i;
		}
		return -1;
	}

	bool DeleteItem(T Value)
	{
		int Index = Find(Value);
		if (Index == -1) return false;
		DeleteItemAt(Index);
		return true;
	}

	bool InsertAt(int Index, T Value)
	{
		if (Index > size || Index < 0) return false;
		size++;
		tempArray = new T[size];
		for (int i = 0, j = 0; i < size; ++i)
		{
			if (i == Index) tempArray[i] = Value;
			else tempArray[i] = originalArray[j++];
		}
		delete[] originalArray;
		originalArray = tempArray;
		return true;
	}

	void InsertAtBeginning(T Value)
	{
		InsertAt(0, Value);
	}

	bool InsertBefore(int Index, T Value)
	{
		if (Index < 1) return InsertAt(0, Value);
		return InsertAt(Index - 1, Value);
	}

	bool InsertAfter(int Index, T Value)
	{
		if (Index >= size) return InsertAt(size, Value);
		return InsertAt(Index + 1, Value);
	}

	void InsertAtEnd(T Value)
	{
		InsertAt(size, Value);
	}

	void PrintList()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << originalArray[i] << " ";
		}
	}

	void Clear()
	{
		size = 0;
		delete[] originalArray;
		originalArray = nullptr;
	}

	~clsDynamicArray()
	{
		delete[] originalArray;
	}
};

