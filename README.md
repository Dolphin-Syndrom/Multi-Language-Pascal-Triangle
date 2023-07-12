# Multi-Language-Pascal-Triangle

This repository contains implementations of Pascal's triangle in four different programming languages: C, C++, Python, and JavaScript. Pascal's triangle is a triangular array of numbers where each number is the sum of the two numbers directly above it. It has many interesting properties and applications in mathematics.

## Usage

The programs in this repository allow the user to input the size of the triangle and the ASCII value (in integer) for the character that the triangle should be printed in. The programs then generate and display the Pascal's triangle using the specified character.

### C

To run the C program, compile the `pascal_triangle.c` file and execute the resulting executable:
```
gcc pascal_triangle.c -o pascal_triangle
./pascal_triangle
```
### C++ 

To run the C++ program, compile the `pascal_triangle.cpp` file and execute the resulting executable:
```
g++ pascal_triangle.cpp -o pascal_triangle
./pascal_triangle
```
### Python

To run the Python program, execute the `pascal_triangle.py` file using the Python interpreter:
```
python pascal_triangle.py
```
### JavaScript

To run the JavaScript program, execute the `pascal_triangle.js` file using Node.js:
```
node pascal_triangle.js
```
### Java

To run the Java program, compile the `pascal_triangle.java` file and execute the resulting bytecode:
```
javac pascal_triangle.java
java pascal_triangle
```
### Dart

To run the Dart program, execute the `pascal_triangle.dart` file using Dart SDK:
```
dart pascal_triangle.dart
```

## Working
The programs use nested for loops to generate the Pascal's triangle. The outer loop (i=0; i<=n; i++) iterates over each row of the triangle, where n is the size of the triangle specified by the user.

Within each row, the first inner loop (j=0; j<=n-i; j++) is used to print the required number of spaces before the coefficients of that row. This creates the triangular shape of the triangle.

The second inner loop (j=1; j<=i; j++) is used to print the coefficients of the current row. The ch variable, which stores the ASCII value entered by the user, is printed in each iteration of this loop.

By combining these loops and printing the appropriate characters, the programs generate and display the Pascal's triangle using the user-specified character.

Feel free to explore the code and run the programs to generate and visualize Pascal's triangle in different programming languages!

## Example

Let's say the user enters a triangle size of 5 and an ASCII value of 42 (which corresponds to the asterisk character '*'). The generated Pascal's triangle will be displayed as follows:
```     
     *
    * *
   * * *
  * * * *
 * * * * *
```
The number of rows and the character used to display the triangle can be customized by the user when prompted by the program.

## Contributions

Contributions to this repository are welcome! If you have additional implementations of Pascal's triangle in other programming languages or enhancements to the existing code, feel free to submit a pull request.

Please ensure that your code follows the established coding conventions and includes appropriate documentation.
