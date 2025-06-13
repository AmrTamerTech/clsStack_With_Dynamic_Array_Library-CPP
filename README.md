# 📌 Stack Implementation (`clsMyStackArr`) ⚡

A C++ template-based stack implementation built on top of a dynamic array-based queue (`clsMyQueueArr`). This class simulates LIFO (Last In, First Out) behavior using `clsDynamicArray`. 🚀

---

## 🌟 Project Overview

The `clsMyStackArr` class extends the `clsMyQueueArr` class and adapts its behavior to act as a **stack**. By overriding the `Push()` function to insert elements at the front of the dynamic array, it enables typical stack operations like `Push`, `Top`, and `Bottom`, while maintaining access to other dynamic features.

This implementation uses **C++ templates**, making it type-generic and suitable for any data type.

---

## 🔹 Core Functionalities:

- 🚀 Push: Insert elements in LIFO order
- 🔍 Top & Bottom: Access the first and last items
- 📏 Stack Size, Print, and Clear
- 🔄 Reverse and Modify Internal Elements (Inherited)
- ✨ All the power of `clsMyQueueArr` + stack-specific control

---

## ✨ Features

### 🔹 Stack-Specific Operations
- `Push(Value)` – Adds an element to the **top** (front) of the stack.
- `Top()` – Returns the **top** element of the stack.
- `Bottom()` – Returns the **bottom** element of the stack (oldest pushed).

### 🔹 Inherited Functionalities from `clsMyQueueArr`
- `Pop()` – Removes the top (front) element.
- `Size()` – Returns number of elements.
- `IsEmpty()` – Checks if stack is empty.
- `Print()` – Displays all stack elements.
- `Reverse()` – Reverses stack order.
- `GetItem(Index)`, `UpdateItem(Index, NewValue)`
- `InsertAfter(Index, Value)`, `InsertAtBack(Value)`
- `Clear()` – Empties the stack completely.

---

## 🚀 How It Works

### 🔹 LIFO Behavior
- `Push()` inserts at the **beginning** of the internal array.
- `Pop()` removes from the **beginning** (top of stack).

### 🔹 Element Access
- `Top()` = first element = most recently pushed.
- `Bottom()` = last element = earliest pushed.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Templates**: Enables generic stack support
- **Inheritance**: Leverages `clsMyQueueArr`
- **Dynamic Array**: Efficient memory use via `clsDynamicArray`

---

## 🎯 Learning Outcomes

✅ Understanding of stack behavior using arrays  
✅ C++ templates and inheritance  
✅ Custom dynamic data structures  
✅ Using queue logic to implement a stack  

---

## 📜 License

This project is open-source. Feel free to use and extend it! 🚀

---

## 🤝 Contributing

Contributions and ideas are welcome. Fork the project, enhance it, and open a pull request!

---

## 🏁 How to Run

1. 📥 Clone the repository:
   ```bash
   git clone https://github.com/your-username/clsStack_With_Dynamic_Array_Library-CPP.git
   cd clsMyStackArr-CPP
   ```
2. 🛠 Include in your project:
```bash

#include"clsMyQueueArr.h" 
#include"clsDynamicArray.h"
#invlude"clsMyStackArr.h"
```
3. 🧪 Compile and run using a C++ compiler:

```bash
g++ main.cpp -o app
./app
```

