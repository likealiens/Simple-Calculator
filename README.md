# 🧮 Simple C++ Calculator

A lightweight console-based calculator written in **C++** that performs basic arithmetic operations on two numbers.  
Made for learning, fun, and a little nostalgia of old-school terminal apps 😄

---

## ✨ Features

- ➕ **Addition**  
- ➖ **Subtraction**  
- ✖️ **Multiplication**  
- ➗ **Division**

Each operation is implemented as a separate function for clean and modular code design.

---

## 🧠 How It Works

1. The user chooses an operation (`1–4`).
2. The program asks for two numbers: `a` and `b`.
3. A fake *"calculating..."* animation (using a loop delay) simulates processing.
4. The final result is displayed in the console.

If an invalid operation is entered, the program prints:
```

Invalid operation entered!

````

---

## 💻 Example Run

```bash
First, choose what operation you want to perform on 2 inputs that you will provide shortly after:
1: a + b, 2: a - b, 3: a * b, 4: a / b ? 1
Enter a: 5
Enter b: 3
calculating ...
The result is: 8
````

---

## ⚙️ Installation & Usage

### 1️⃣ Clone the repository

```bash
git clone https://github.com/likealiens/simpleCalculator.git
cd simpleCalculator
```

### 2️⃣ Compile the program

```bash
g++ calculator.cpp -o calculator
```

### 3️⃣ Run it

```bash
./calculator
```

---

## ⚠️ Notes

* ❗ Division by zero isn’t handled — dividing by 0 will output `inf` (infinity).
* 🕒 The "calculating..." part is just a fun delay made using a `while` loop.
* 🎯 You can remove or adjust it if you want instant results.

---

## 🧩 Code Overview

```cpp
double add(double x, double y)      { return x + y; }
double subtract(double x, double y) { return x - y; }
double multiply(double x, double y) { return x * y; }
double divide(double x, double y)   { return x / y; }
```

---

## 🧑‍💻 Author

**Davlat (likealiens)**
💡 Learning **C++**, exploring algorithms, and building cool console projects.
🌐 GitHub: [likealiens](https://github.com/likealiens)

---

## ⭐ Future Improvements

* Add input validation
* Handle division by zero
* Add loop for multiple calculations
* Maybe a GUI version (with SFML or Qt) later 👀

---

### 🖤 Made with C++ and curiosity.

```

---
