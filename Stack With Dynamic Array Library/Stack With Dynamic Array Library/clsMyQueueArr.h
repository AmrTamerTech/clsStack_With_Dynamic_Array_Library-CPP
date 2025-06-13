#pragma once
#include "clsDynamicArray.h"
using namespace std;

template <class T>
class clsMyQueueArr
{
protected:
	clsDynamicArray <T> myArray;

public:
	void Push(T Value)
	{
		myArray.InsertAtEnd(Value);
	}

	int Size() const
	{
		return myArray.Size();
	}

	void Pop()
	{
		myArray.DeleteFirstItem();
	}

	T Front()
	{
		return myArray.GetItem(0);
	}

	T Back()
	{
		return myArray.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return myArray.GetItem(Index);
	}

	void Reverse()
	{
		myArray.Reverse();
	}

	bool IsEmpty()
	{
		return myArray.IsEmpty();
	}

	void UpdateItem(int Index, T NewValue)
	{
		myArray.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T Value)
	{
		myArray.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		myArray.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		myArray.InsertAtEnd(Value);
	}

	void Print()
	{
		myArray.PrintList();
	}

	void Clear()
	{
		myArray.Clear();
	}

};

