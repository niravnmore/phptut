# Module 2 – Introduction to Programming

## 1. Overview of C Programming

### Q-01

> Write an essay covering the history and evolution of C programming. Explain its importance and why it is still used today.

#### Introduction

C programming language, created by Dennis Ritchie in the early 1970s at Bell Labs, is a cornerstone of modern computer science. Its efficiency, simplicity, and flexibility have made it foundational to many programming languages and critical applications.

#### Origins

C was developed for the Unix operating system to replace assembly language, combining low-level capabilities with structured programming features. By 1973, most of Unix was rewritten in C, proving its viability for system-level programming.

#### Evolution

- K&R C (1978): Dennis Ritchie and Brian Kernighan’s book standardized early C features.
- ANSI C (1989): Provided a consistent specification, ensuring cross-platform compatibility.
- ISO C (1990+): Periodic updates like C99, C11, and C18 introduced modern features such as multithreading and performance optimizations.

#### Importance

- Foundation for Modern Languages: Influenced languages like C++, Java, and Python.
- System-Level Programming: Essential for operating systems, embedded systems, and drivers.
- Portability and Performance: Runs efficiently across hardware platforms.

#### Relevance Today

- Critical Applications: Used in embedded systems, kernel development, and real-time applications.
- Educational Value: Teaches core programming concepts like memory management.
- Legacy Systems: Maintains and updates existing systems written in C.
- Interoperability: Simplifies integration with other languages and technologies.

C’s blend of power and simplicity ensures its continued relevance. Its influence on programming paradigms and role in critical applications make it indispensable in both education and industry.

### LE-01

> Research and provide three real-world applications where C programming is extensively used, such as in embedded systems, operating systems, or game development.

C programming is used in many real-world applications. Here are three of them:

1. Embedded systems: It is used in microcontrollers, IoT devices, automotive systems and medical equipments and systems. C is lightweight, provides low-level hardware access, and has a small runtime footprint, making it ideal for resource-constrained environments.

2. Operating Systems: It is used in developing system kernels and system-level softwares such as linux, Windows, macOS and mobile OS kernels like Android. C allows direct manipulation of hardware resources like memory and CPU registers, providing the control needed for low-level system operations.

3. Operating Systems: It is used for game engines and performance critical game components. C offers high performance, memory management capabilities, and close-to-hardware operations, which are essential for rendering graphics and handling real-time inputs.

## 2. Setting Up Environment

### Q-02

> Describe the steps to install a C compiler (e.g., GCC) and set up an Integrated Development Environment (IDE) like DevC++, VS Code, or CodeBlocks.

### LE-02

Install a C compiler on your system and configure the IDE. Write your first program to print "Hello, World!" and run it.

```c
#include<stdio.h>
main()
{
    printf("Hello, World!");
}
```

## 3. Basic Structure of a C Program

### Q-03

> Explain the basic structure of a C program, including headers, main function, comments, data types, and variables. Provide examples.

C program follows a specific structure that includes headers, the main function, comments, data types, and variables. Here’s a breakdown with examples:

1. **Headers:**
   Headers include preprocessor directives, which provide functionality like input/output operations or mathematical computations. Example:

   ```c
   #include <stdio.h> // For standard input/output functions
   #include <math.h>  // For mathematical functions
   ```

2. **Main Function:**
   Every C program must have a `main()` function, which serves as the entry point. Example:

   ```c
   int main() {
       // Code execution starts here
       return 0;
   }
   ```

3. **Comments:**
   Comments are used to explain code and are ignored by the compiler. Single-line comments start with `//`, and multi-line comments are enclosed within `/* ... */`.

   ```c
   // This is a single-line comment
   /* This is a
      multi-line comment */
   ```

4. **Data Types:**
   Data types define the kind of data a variable can hold, such as integers, floating-point numbers, or characters. Common data types include `int`, `float`, `double`, and `char`.

   ```c
   int age = 25;       // Integer
   float height = 5.9; // Floating-point number
   char grade = 'A';   // Character
   ```

5. **Variables:**
   Variables store data that can be used and modified during program execution. Variables must be declared with a type before use.

   ```c
   int x = 10;
   int y = 20;
   int sum = x + y; // Variables can store the result of operations
   ```

6. **Example Program:**
   Here is a simple C program demonstrating the structure:

   ```c
   #include <stdio.h> // Include standard input/output header

   int main() {
       // Declare variables
       int num1 = 10;
       int num2 = 20;

       // Compute sum
       int sum = num1 + num2;

       // Print result
       printf("The sum is: %d\n", sum);

       return 0; // Indicate successful execution
   }
   ```

### LE-03

> Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values.

```c
#include <stdio.h> // Include standard input/output header

int main() {
    // Declare and initialize variables
    int age = 25;             // Integer variable
    char initials = 'A';       // Character variable
    float height = 5.9;       // Floating-point variable

    // Declare a constant
    const float PI = 3.14159; // Constant value

    // Print values
    printf("Age: %d\n", age);     // Age: 25
    printf("Initials: %c\n", initials);  //Initials: A
    printf("Height: %.1f\n", height);    //Height: 5.9
    printf("Value of PI: %.5f\n", PI);   //Value of PI: 3.14159

    return 0; // Indicate successful execution
}
```

## 4. Operators in C

### Q-04

> Write notes explaining each type of operator in C: arithmetic, relational, logical, assignment, increment/decrement, bitwise, and conditional operators.

1 . **Arithmetic Operators:** Perform basic mathematical operations.

- `+` (addition),
- `-` (subtraction),
- `*` (multiplication),
- `/` (division),
- `%` (modulus - remainder of division).

```c
int a = 10, b = 5;
printf("Sum: %d\n", a + b); // Addition
printf("Product: %d\n", a * b); // Multiplication
```

2 . **Relational Operators:** Compare two values and return true (1) or false (0).

- `==` (equal to),
- `!=` (not equal to),
- `<` (less than),
- `>` (greater than),
- `<=` (less than or equal to),
- `>=` (greater than or equal to).

```c
int x = 5, y = 10;
if (x < y) {
    printf("x is less than y\n");
}
```

3 . **Logical Operators:** Combine or negate conditions in logical expressions.

- `&&` (AND): Returns true if both conditions are true.
- `||` (OR): Returns true if at least one condition is true.
- `!` (NOT): Inverts the condition's value.

```c
int age = 25, salary = 5000;
if (age > 18 && salary > 3000) {
    printf("Eligible for loan\n");
}
```

4 . **Assignment Operators:** Assign or modify values of variables.

- `=` (assign value),
- `+=` (add and assign),
- `-=` (subtract and assign),
- `*=` (multiply and assign),
- `/=` (divide and assign),
- `%=` (modulus and assign).

```c
int num = 10;
num += 5; // num becomes 15
```

5 . **Increment/Decrement Operators:** Increase or decrease a variable's value by 1.

- `++` Increment operator
- `--` Decrement operator

```c
int count = 0;
count++; // count becomes 1
--count; // count becomes 0
```

6 . **Bitwise Operators:** Operate at the bit level.

- `&` Bitwise and operator
- `|` Bitwise or operator
- `^` Bitwise XOR operator
- `~` Bitwise NOT operator
- `<<` Bitwise left shift operator
- `>>` Bitwise right shift operator

```c
int a = 5, b = 3;
printf("Bitwise AND: %d\n", a & b); // Output: 1
printf("Left shift: %d\n", a << 1); // Output: 10
```

7 . **Conditional Operators:** Simplifies simple if-else statements. `condition ? value_if_true : value_if_false`.

```c
int a = 10, b = 20;
int max = (a > b) ? a : b; // max becomes 20
```

### LE-04

> Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.

```c
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;             // Integer variable

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Arithmetic operation
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // Relational operation
    printf("%d == %d : %d\n", num1, num2, num1 == num2);
    printf("%d != %d : %d\n", num1, num2, num1 != num2);
    printf("%d > %d : %d\n", num1, num2, num1 > num2);
    printf("%d < %d : %d\n", num1, num2, num1 < num2);
    printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d : %d\n", num1, num2, num1 <= num2);

    // Logical operation
    printf("(%d > 0) && (%d > 0): %d\n", num1, num2, (num1 > 0) && (num2 > 0));
    printf("(%d > 0) || (%d > 0): %d\n", num1, num2, (num1 > 0) || (num2 > 0));
    printf("!(%d > %d): %d\n", num1, num2, !(num1 > num2));

    return 0; // Indicate successful execution
}
```

## 5. Control Flow Statements in C

### Q-05

> Explain decision-making statements in C (if, else, nested if-else, switch). Provide examples of each.

In C, decision-making statements allow a program to make choices based on certain conditions. The primary decision-making statements are `if`, `else`, `if-else`, nested `if-else`, and `switch`.

1. `if` Statement : The if statement checks a condition and executes a block of code only if the condition is true.

```c
int age = 18;

    if (age >= 18) {
        printf("You are an adult.\n");
    }
```

2 . `else` Statement : The else statement follows an if statement and is executed if the if condition is false.

```c
int age = 16;

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }
```

3 . `if...else` statement : The if-else statement allows the program to choose between two blocks of code, based on a condition.

```c
int number = 10;

    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
```

4 . Nested `if...else` statement : A nested if-else statement means an if-else structure inside another if-else. It is used when there are multiple conditions to check.

```c
int age = 20;

    if (age >= 18) {
        if (age >= 21) {
            printf("You are eligible to drink alcohol.\n");
        } else {
            printf("You are an adult but not eligible to drink alcohol.\n");
        }
    } else {
        printf("You are a minor.\n");
    }
```

5 . `switch` Statement : The switch statement is used to select one of many code blocks to be executed based on the value of a variable.

```c
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }
```

#### Summary

- `if`: Executes code if a condition is true.
- `else`: Executes code if the if condition is false.
- `if-else`: Allows for two choices, one if the condition is true and one if it's false.
- Nested `if-else`: Multiple if-else blocks inside each other to handle more complex conditions.
- `switch` : A cleaner alternative to multiple if-else statements when checking a single variable against several values.

### LE-05

> Write a C program to check if a number is even or odd using an if-else statement. Extend the program using a switch statement to display the month name based on the user’s input (1 for January, 2 for February, etc.).

```c
#include <stdio.h>

int main() {
    // Declare variables
    int num, mon;

    // Input integer from the user
    printf("Enter the an integer A: ");
    scanf("%d", &num);

    // Check number is odd or even
    if(num%2==0){
     printf("\nInteger %d is even number.", num);
 } else {
  printf("\nInteger %d is odd number.", num);
 }
 printf("\n");
 // Input month number from the user
 printf("\nEnter number of the month :");
    scanf("%d", &mon);

    // Displaying month name
    switch(mon){
     case 1:
            printf("\nMonth name is January");
            break;
        case 2:
            printf("\nMonth name is February");
            break;
        case 3:
            printf("\nMonth name is March");
            break;
        case 4:
            printf("\nMonth name is April");
            break;
        case 5:
            printf("\nMonth name is May");
            break;
        case 6:
            printf("\nMonth name is June");
            break;
        case 7:
            printf("\nMonth name is July");
            break;
        case 8:
            printf("\nMonth name is August");
            break;
        case 9:
            printf("\nMonth name is September");
            break;
        case 10:
            printf("\nMonth name is October");
            break;
        case 11:
            printf("\nMonth name is November");
            break;
        case 12:
            printf("\nMonth name is December");
            break;
        default:
            printf("\nMonth number is invalid");
 }
    return 0;
}
```

## 6. Looping in C

### Q-06

> Compare and contrast while loops, for loops, and do-while loops. Explain the scenarios in which each loop is most appropriate.

In C, loops allow repeated execution of a block of code as long as a condition is met. The three primary loop structures—while, for, and do-while—have distinct features and are suitable for different scenarios.

- `while` loop : it is a pre-checking loop so the condition is evaluated before executing the block of code. Thus, it is used were it required to verify the condition before executing a block of code. The code may not execute if the condition is false initially.

e.g., Reading input until the user enters a specific value or processing data until a file ends.

- `for` loop : It is a count-controlled loop, making it ideal when the number of iterations are known beforehand. It combines the initialisation, condition-checking and increment/decrement in a single line. It is best for situations with a fixed number of iterations.

e.g., Iterating over arrays, counting numbers, or running a loop a specific number of times.

- `do..while` loop : This loop is a post-checking loop, i.e., the condition is evaluated after executing the block of code. This loop is used where it is neccessary to execute the block of code atleast once. It is also used where the code is executed first and condition is checked afterwards.

e.g., Menu-driven programs or input validation where initial execution is required.

### LE-06

> Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).

```c
#include <stdio.h>

main() {
    // Declare variables
    int num, a, b;

    // Print number from 1 to 10
    // while loop
    a=1;
    while(a<=10){
     printf("%d ", a);
     a++;
 }
 printf("\n");

    // for loop
    for(int i=0;i<11;i++){
     if(i!=0){
      printf("%d ", i);
  }
 }
 printf("\n");
 // do..while loop
 b=1;
 do{
  printf("%d ", b);
  b++;
 } while(b<=10);
}
```

## 7. Loop Control Statements

### Q-07

> Explain the use of break, continue, and goto statements in C. Provide examples of each.

- `break` Statement : The break statement is used to exit from a loop or switch statement prematurely. When encountered, the control immediately exits the loop or switch block, skipping the remaining iterations or cases.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Exit the loop when i equals 3
        }
        printf("%d ", i);
    }
    return 0;
}
```

- `continue` Statement : The continue statement is used to skip the rest of the code in the current iteration of a loop and move to the next iteration.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip the iteration when i equals 3
        }
        printf("%d ", i);
    }
    return 0;
}
```

- `goto` Statement : The goto statement transfers control to a labeled statement elsewhere in the code. It provides an unconditional jump and is rarely used due to its potential to make the code harder to follow.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i * j == 4) {
                goto exit_loops; // Exit both loops
            }
            printf("%d ", i * j);
        }
    }

exit_loops:
    printf("\nExited loops.\n");

    return 0;
}
```

### LE-07

> Write a C program that uses the break statement to stop printing numbers when it reaches 5. Modify the program to skip printing the number 3 using the continue statement.

```c
#include <stdio.h>

main() {
    // Write a C program that uses the break statement to stop
    // printing numbers when it reaches 5.
    // Modify the program to skip printing the number 3
    // using the continue statement.
    int a=1;
    while(a<=10){
 //     if(a==5){
 //      break;
 //  }
  if(a==3){
   a++;
   continue;
  }else {
   printf("%d ", a);
      a++;
  }
 }
 printf("\n");
}
```

## 8. Functions in C

### Q-08

> What are functions in C? Explain function declaration, definition, and how to call a function. Provide examples.

### LE-08

> Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.

---

```c
#include <stdio.h>

// Write a C program that calculates the factorial of a number using a function.
// Include function declaration, definition, and call.

int factorial(int n){
 int fac=1;
 for(int i=1;i<=n;i++){
  fac*=i;
 }
 return fac;
}

main(){
 int a;
 printf("Enter a number : ");
 scanf("%d", &a);
 printf("\nFactorial value is %d", factorial(a));
}
```

## 9. Arrays in C

### Q-09

> Explain the concept of arrays in C. Differentiate between one-dimensional and multi-dimensional arrays with examples.

### LE-09

> Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

```c
#include<stdio.h>
// Write a C program that stores 5 integers in a one-dimensional array and prints them.
// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.
int main(){
	int ar1[5];
	printf("Please enter 5 integer values ");
	for(int i=0;i<5;i++){
		scanf("%d", &ar1[i]);
	}
	printf("\nStored integers are :");
	for(int i=0;i<5;i++){
		printf("\n%d", ar1[i]);
	}
	return 0;
}
```

```c
#include<stdio.h>
int main(){
	int ar1[3][3];
	int sum=0;
	for(int i=0;i<3;i++){
		printf("\nPlease enter 3 integer values ");
		for(int j=0;j<3;j++){
			scanf("%d", &ar1[i][j]);
		}
	}
	printf("\nStored integers are : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ", ar1[i][j]);
			sum = sum + ar1[i][j];
		}
		printf("\n");
	}
	// Sum calculation
	printf("\nSum of all numbers is %d", sum);
	return 0;
}
```

## 10. Pointers in C

### Q-10

> Explain what pointers are in C and how they are declared and initialized. Why are pointers important in C?

### LE-10

> Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.

```c
#include <stdio.h>
int main() {
	//Write a C program to demonstrate pointer usage.
	//Use a pointer to modify the value of a variable and print the result.
    int num = 21;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    *ptr = 39
    printf("Value of num after : %d\n", num);

    return 0;
}
```

## 11. Strings in C

### Q-11

> Explain string handling functions like strlen(), strcpy(), strcat(), strcmp(), and strchr(). Provide examples of when these functions are useful.

### LE-11

> Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().

```c
#include <stdio.h>
#include <string.h> // header file for managing strings

int main() {

    // Declare strings
    char st1[20], st2[20], res[50];

    //get strings
    printf("Enter a string :");
    fgets(st1, sizeof(st1), stdin); // Read string
    st1[strcspn(st1, "\n")] = '\0'; // remove newline character

	printf("\nEnter another string :");
    fgets(st2, sizeof(st2), stdin);
    st2[strcspn(st2, "\n")] = '\0';

    strcpy(res, st1); // copy string in new variable
    strcat(res, st2); // Concatenate strings
    printf("\n%s", res); // print string
    printf("\nLength of string : %lu", strlen(res)); // print length of string
}
```

## 12. Structures in C

### Q-12

> Explain the concept of structures in C. Describe how to declare, initialize, and access structure members.

### LE-12

> Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of structures to store details of 3 students and print them.

```c
#include <stdio.h>

// Define the structure to store student details
struct Student {
    char name[50];
    int rollnum;
    int marks;
};

int main() {
    struct Student students[3]; // Array of structures for 3 students

    // Input details of each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].rollnum);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }

    // Print details of each student
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollnum);
        printf("Marks: %d\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
```

## 13. File Handling in C

### Q-13

> Explain the importance of file handling in C. Discuss how to perform file operations like opening, closing, reading, and writing files.

### LE-13

> Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100] = "example.txt"; // File name
    char content[100];

    file = fopen(filename, "w"); // Open the file in write mode
    if (file == NULL) {
        printf("Error: Unable to create file.\n");
        exit(1);
    }

    printf("Enter a string to write to the file: ");
    fgets(content, sizeof(content), stdin); // Read a string from the user

    fprintf(file, "%s", content); // Write the string to the file
    fclose(file); // Close the file after writing
    printf("String written to file successfully.\n");

    file = fopen(filename, "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        exit(1);
    }

    printf("\nContents of the file:\n");
    while (fgets(content, sizeof(content), file) != NULL) { // Read and print the file contents
        printf("%s", content);
    }

    fclose(file); // Close the file after reading

    return 0;
}
```

EXTRA LAB EXERCISES FOR IMPROVING PROGRAMMING LOGIC

## 1. Operators

### ELE-01

1: Simple Calculator

> Write a C program that acts as a simple calculator. The program should take two numbers and an operator as input from the user and perform the respective operation (addition, subtraction, multiplication, division, or modulus) using operators.

> Extend the program to handle invalid operator inputs.

```c
#include<stdio.h>

int main(){
	// declare variables
	int nu1, nu2;
	char operation;

	// Get input values and operator
	printf("Please enter first number : ");
	scanf("%d", &nu1);

	printf("\nPlease select any one operator(+,-,*,/,%%): ");
	scanf(" %c", &operation);

	printf("\nPlease enter second number : ");
	scanf("%d", &nu2);

	switch(operation){
		case '+':
			printf("Result: %d\n", nu1+nu2);
			break;
		case '-':
			printf("Result: %d\n", nu1-nu2);
			break;
		case '*':
			printf("Result: %d\n", nu1*nu2);
			break;
		case '/':
			if(nu2 != 0){
				printf("Result: %.2f\n", (float)nu1 / nu2);
				break;
			} else {
				printf("Division by zero is not allowed.\n");
				break;
			}
		case '%':
			if(nu2 != 0){
				printf("Result: %d\n", (nu1%nu2));
				break;
			} else {
				printf("Division by zero is not allowed.\n");
				break;
			}
		default:
			printf("Selected operator is invalid.\n");
	}
}
```

### ELE-02

Check Number Properties

```
Write a C program that takes an integer from the user and checks the following using different operators:
    - Whether the number is even or odd.
    - Whether the number is positive, negative, or zero.
    - Whether the number is a multiple of both 3 and 5.
```

```c
#include<stdio.h>

int main()
{
	// Declare a variable
	int a;
	printf("Please enter a number: ");
	scanf("%d\n", &a);

	if (a % 2 == 0) // Check if the number is even
	{
		printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}

	if (a > 0) // Check if the number is positive, negative or zero
	{
		printf("The number is positive\n");
	}
	else if (a < 0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is zero\n");
	}

	if (a%3 == 0 && a%5 == 0) // Check if the number is divisible by 3 and 5
	{
		printf("The number is divisible by 3 and 5\n");
	}
	else if (a%3 == 0)
	{
		printf("The number is divisible by 3\n");
	}
	else if (a%5 == 0)
	{
		printf("The number is divisible by 5\n");
	}
	else
	{
		printf("The number is not divisible by 3 or 5\n");
	}
	return 0;
}
```

## 2. Control Statements

### ELE-03 : Grade Calculator

```
Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
Use if-else or switch statements for the decision-making process.
```

```c
#include<stdio.h>

int main()
{
	// Declare a variable
	int marks;
	printf("Please enter student's marks :");
	scanf("%d", &marks);

	if(marks >= 50) // Check if the marks are greater than 50
	{
		if(marks > 75) // Check if the marks are greater than 75
		{
			if(marks > 90) // Check if the marks are greater than 90
			{
				printf("Grade A\n");
			}
			else
			{
				printf("Grade B\n");
			}
		}
		else
		{
			printf("Grade C\n");
		}
	}
	else
	{
		printf("Grade D\n");
	}
	return 0;
}
```

### ELE-04 : Number Comparison

```
Write a C program that takes three numbers from the user and determines:
o The largest number. o The smallest number.

Challenge: Solve the problem using both if-else and switch-case statements.
```

#### if-else statement

```c
#include<stdio.h>

int main()
{
	// Declare variables
	int a, b, c;

	// Assign values
	printf("Enter the value of first number: ");
	scanf("%d", &a);
	printf("Enter the value of second number: ");
	scanf("%d", &b);
	printf("Enter the value of third number: ");
	scanf("%d", &c);

	// Calculate largest number and smallest number
	if(a >= b){ // a>=b
		if(a >= c){  // a>=b and a>=c
			if(c >= b){  // a>=b and a>=c and c>=b
				printf("Largest number is: %d\n", a);
				printf("Smallest number is: %d\n", b);
			}
			else{ // a>=b and a>=c and b>=c
				printf("Largest number is: %d\n", a);
				printf("Smallest number is: %d\n", c);
			}
		}
		else{ // a>=b and c>=a
			printf("Largest number is: %d\n", c);
			printf("Smallest number is: %d\n", b);
		}
	}
	else{
		if(b >= c){
			if(c >= a){ // b>=a and b>=c and c>=a
				printf("Largest number is: %d\n", b);
				printf("Smallest number is: %d\n", a);
			}
			else{ // b>=a and b>=c and a>=c
				printf("Largest number is: %d\n", b);
				printf("Smallest number is: %d\n", c);
			}
		}
		else{
			if(a >= b){ // c>=b and c>=a and a>=b
				printf("Largest number is: %d\n", c);
				printf("Smallest number is: %d\n", b);
			}
			else{ // c>=b and c>=a and b>=a
				printf("Largest number is: %d\n", c);
				printf("Smallest number is: %d\n", a);
			}
		}
	}
	return 0;
}
```

#### switch statement

```c
#include<stdio.h>

int main()
{
	// Declare variables
	int a, b, c;

	// Assign values
	printf("Enter the value of first number: ");
	scanf("%d", &a);
	printf("Enter the value of second number: ");
	scanf("%d", &b);
	printf("Enter the value of third number: ");
	scanf("%d", &c);

	// Calculate largest number
	switch(a >= b)
	{
		case 1:
		switch(a >= c)
		{
			case 1:
				printf("Largest number is %d\n", a);
				break;
			case 0:
				printf("Largest number is %d\n", c);
				break;
		}
		break;
		case 0:
		switch(b >= c)
		{
			case 1:
				printf("Largest number is %d\n", b);
				break;
			case 0:
				printf("Largest number is %d\n", c);
				break;
		}
		break;
	}

	// Calculate smallest number
	switch(a<=b){
		case 1:
			switch(a<=c){
				case 1:
					printf("Smallest number is %d\n", a);
					break;
				case 0:
					printf("Smallest number is %d\n", c);
					break;
			}
			break;
		case 0:
			switch(b<=c){
				case 1:
					printf("Smallest number is %d\n", b);
					break;
				case 0:
					printf("Smallest number is %d\n", c);
					break;
			}
			break;
	}

	return 0;
}
```

## 3. Loops

### ELE-05 : Prime Number Check

```
Write a C program that checks whether a given number is a prime number or not using a for loop.

Challenge: Modify the program to print all prime numbers between 1 and a given number.
```

```c
#include<stdio.h>

// Check if number is prime number
bool isPrime(int n){
	if (n <= 1) {
		return false; // 0 and 1 are not prime numbers
	}
	for (int i=2; i*i<=n; i++){
		if (n % i == 0){
			return false; // not a prime number
		}
	}
	return true; // a prime number
}

int main(){
	int myNumber;
	int j=0;

	printf("Please enter a number : ");
	scanf("%d", &myNumber);

	if(isPrime(myNumber)){
		printf("%d is a prime number.\n", myNumber);
	} else {
		printf("%d is not a prime number.\n", myNumber);
	}

	printf("Prime numbers between 1 and %d :\n", myNumber);
	for (int i=2; i<= myNumber; i++){
		if (isPrime(i)) {
			printf("%d, ", i);
			j++;
			if(j%10==0){
				printf("\n");
			}
		}
	}
	return 0;
}
```

### ELE-06 : Multiplication Table

```
Write a C program that takes an integer input from the user and prints its multiplication table using a for loop.

Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N ).
```

```c
#include <stdio.h>

int main() {
	printf("Multiplication table creator:\n");
	int n, range;

	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter the range: ");
	scanf("%d", &range);

	for (int i = 1; i <= range; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}
```

### ELE-07 : Sum of Digits

```
Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.

Challenge: Extend the program to reverse the digits of the number.
```

```c
#include <stdio.h>

int main() {

	int num, sum = 0, remainder;
	printf("Enter an integer: ");
	scanf("%d", &num); // 1234
	int temp = num;
	while (temp != 0) {
		remainder = temp % 10; // 4 - 3 - 2 - 1
		sum = sum + remainder; // 4 - 7 - 9 - 10
		temp = temp / 10; // 123 - 12 - 1 - 0
	}

	printf("Sum of digits: %d\n", sum);

	// Reverse the digits
	int reversed = 0;
	temp = num;
	while (temp != 0) {
		remainder = temp % 10; // 4 - 3 - 2 - 1
		reversed = reversed * 10 + remainder; // 4 - 43 - 432 - 4321
		temp = temp / 10; // 123 - 12 - 1 - 0
	}
	printf("Reversed number: %d\n", reversed);
	return 0;
}
```

## 4. Arrays

### ELE-08 : Maximum and Minimum in Array

```
Write a C program that accepts 10 integers from the user and stores themin an array. Theprogram should then find and print the maximum and minimum values in the array.

Challenge: Extend the program to sort the array in ascending order.
```

```c
#include <stdio.h>

int main() {
	// Write a C program that accepts 10 integers from the user and
	// stores them in an array.
	// The program should then find and print the maximum and minimum values
	// in the array.
	// Challenge: Extend the program to sort the array in ascending order.

	int arr[10];
	int i, max, min, temp;
	printf("Enter 10 integers: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for (i = 1; i < 10; i++) {
		if (arr[i] > max) { // find max
			max = arr[i];
		}
		if (arr[i] < min) { // find min
			min = arr[i];
		}
	}
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	// Sort the array
	for (i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) { // swap elements
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Sorted array: ");
	for (i = 0; i < 10; i++) {
		printf("%d, ", arr[i]);
	}

	return 0;
}
```

### ELE-09 : Matrix Addition & Multiplication

```
Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.
```

```c
#include <stdio.h>

int main() {

	int a[2][2], b[2][2], c[2][2], d[2][2];
	int i, j;

	printf("Enter the elements of the first 2x2 matrix: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	// print the first matrix
	printf("The first matrix is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("Enter the elements of the second 2x2 matrix: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	// print the second matrix
	printf("The second matrix is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	// add the two matrices
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	// print the resultant matrix
	printf("The resultant matrix is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	// matrix multiplication
	d[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
	d[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
	d[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
	d[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1];

	// print the resultant matrix
	printf("The resultant matrix after multiplication is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}

	return 0;
}
```

```
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
```

```c
#include <stdio.h>

int main() {

	int a[3][3], b[3][3], c[3][3], d[3][3];
	int i, j, k;

	printf("Enter the first matrix: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	// Display the first matrix
	printf("The first matrix is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("Enter the second matrix: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	// Display the second matrix
	printf("The second matrix is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	// Addition of two matrices
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	// Display the result of addition
	printf("The result of addition is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	// Multiplication of two matrices
	d[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0] + a[0][2]*b[2][0];
	d[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1] + a[0][2]*b[2][1];
	d[0][2] = a[0][0]*b[0][2] + a[0][1]*b[1][2] + a[0][2]*b[2][2];

	d[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0] + a[1][2]*b[2][0];
	d[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1] + a[1][2]*b[2][1];
	d[1][2] = a[1][0]*b[0][2] + a[1][1]*b[1][2] + a[1][2]*b[2][2];

	d[2][0] = a[2][0]*b[0][0] + a[2][1]*b[1][0] + a[2][2]*b[2][0];
	d[2][1] = a[2][0]*b[0][1] + a[2][1]*b[1][1] + a[2][2]*b[2][1];
	d[2][2] = a[2][0]*b[0][2] + a[2][1]*b[1][2] + a[2][2]*b[2][2];

	// Display the result of multiplication
	printf("The result of multiplication is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}

	return 0;
}
```

### ELE-10 : Sum of Array Elements

```
Write a C program that takes N numbers from the user and stores them in an array. The program should then calculate and display the sum of all array elements.

Challenge: Modify the program to also find the average of the numbers.
```

```c
#include <stdio.h>

int main() {

    int n[100], i, sum = 0;
	float avg;

	printf("Enter the number of elements: ");
	scanf("%d", &i);

	for (int j = 0; j < i; j++) {
		printf("Enter number %d: ", j + 1);
		scanf("%d", &n[j]);
		sum += n[j];
	}

	// print array
	printf("Array: ");
	for (int j = 0; j < i; j++) {
		printf("%d ", n[j]);
	}
	printf("\n");

	/// print sum
	printf("Sum: %d\n", sum);

	// print average
	avg = (float)sum / i;
	printf("Average: %.2f\n", avg);

	return 0;
}
```

## 5. Functions

### ELE-11 : Fibonacci Sequence

```
Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.

Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative and recursive methods. Compare their efficiency.
```

```c
#include <stdio.h>

int fib(int n) {
	if (n <= 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {

	int n, i;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("Fibonacci series: ");

	for (i = 0; i < n; i++) {
		printf("%d ", fib(i));
	}
	printf("\n");

	// iterative method
	int a = 0, b = 1, c;
	for (i = 0; i < n; i++) {
		if (i <= 1) {
			c = i;
		} else {
			c = a + b;
			a = b;
			b = c;
		}
	}
	printf("Nth Fibonacci number using iterative method: %d\n", c);

	// recursive method
	printf("Nth Fibonacci number using recursive method: %d\n", fib(n - 1));

	return 0;
}
```

### ELE-12 : Factorial Calculation

```
Write a C program that calculates the factorial of a given number using a function.

Challenge: Implement both an iterative and a recursive version of the factorial function and compare their performance for large numbers.
```

```c
#include <stdio.h>

// Iterative version
int factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

// Recursive version
int factorial_recursive(int n){
		if (n == 0) {
			return 1;
		}
		return n * factorial_recursive(n - 1);
	}

int main() {


	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	// Iterative version
	printf("Factorial of %d is %d\n", n, factorial(n));

	// Recursive version
	printf("Factorial of %d is %d\n", n, factorial_recursive(n));

	// Performance comparison
	// The recursive version is slower than the iterative version because it has to make a function call for each recursive call.

	return 0;
}
```

### ELE-13 : Palindrome Check

```
Write a C program that takes a number as input and checks whether it is a palindrome using a function.
Challenge: Modify the program to check if a given string is a palindrome.
```

```c
#include <stdio.h>

int main() {

	int num, reversedNum = 0, remainder, originalNum;
	printf("Enter an integer: ");
	scanf("%d", &num);
	originalNum = num;

	// reversed integer is stored in reversedNum
	while (num != 0) {
		remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /= 10;
	}

	// palindrome if orignalNum and reversedNum are equal
	if (originalNum == reversedNum)
		printf("%d is a palindrome.\n", originalNum);
	else
		printf("%d is not a palindrome.\n", originalNum);

	// Challenge: Modify the program to check if a given string is a palindrome.
	char str[100];
	int i, length;
	int flag = 0;
	printf("Enter a string: ");
	scanf("%s", str);

	// Find the length of the string
	for (length = 0; str[length] != '\0'; length++);

	// Check if the string is palindrome or not
	for (i = 0; i < length; i++) {
		if (str[i] != str[length - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag)
		printf("%s is not a palindrome.\n", str);
	else
		printf("%s is a palindrome.\n", str);

	return 0;
}
```

## 6. Strings

### ELE-14 : String Reversal

```
Write a C program that takes a string as input and reverses it using a function. Challenge: Write the program without using built-in string handling functions.
```

```c

```

LAB EXERCISE 2: Count Vowels and Consonants
 Write a C program that takes a string from the user and counts the number of vowels and consonants in the string.  Challenge: Extend the program to also count digits and special characters. LAB EXERCISE 3: Word Count
 Write a C program that counts the number of words in a sentence entered by the user.  Challenge: Modify the program to find the longest word in the sentence. Extra Logic Building Challenges
Lab Challenge 1: Armstrong Number
 Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3).  Challenge: Write a program to find all Armstrong numbers between 1 and 1000. Lab Challenge 2: Pascal’s Triangle
 Write a C program that generates Pascal’s Triangle up to N rows using loops.  Challenge: Implement the same program using a recursive function. Lab Challenge 3: Number Guessing Game
 Write a C program that implements a simple number guessing game. The program should generate a random number between 1 and 100, and the user should guess the number
within a limited number of attempts.
11
TOPS Technologies 2024
 Challenge: Provide hints to the user if the guessed number is too high or too low
