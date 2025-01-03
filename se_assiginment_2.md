# Module 2 – Introduction to Programming

## 1. Overview of C Programming

### Q-01
>
>Write an essay covering the history and evolution of C programming. Explain its importance and why it is still used today.  

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
>
>Research and provide three real-world applications where C programming is extensively used, such as in embedded systems, operating systems, or game development.  

C programming is used in many real-world applications. Here are three of them:  

1. Embedded systems: It is used in microcontrollers, IoT devices, automotive systems and medical equipments and systems. C is lightweight, provides low-level hardware access, and has a small runtime footprint, making it ideal for resource-constrained environments.

2. Operating Systems: It is used in developing system kernels and system-level softwares such as linux, Windows, macOS and mobile OS kernels like Android. C allows direct manipulation of hardware resources like memory and CPU registers, providing the control needed for low-level system operations.

3. Operating Systems: It is used for game engines and performance critical game components. C offers high performance, memory management capabilities, and close-to-hardware operations, which are essential for rendering graphics and handling real-time inputs.

## 2. Setting Up Environment

### Q-02  
>
>Describe the steps to install a C compiler (e.g., GCC) and set up an Integrated Development Environment (IDE) like DevC++, VS Code, or CodeBlocks.  

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
>
>Explain the basic structure of a C program, including headers, main function, comments, data types, and variables. Provide examples.

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
>
>Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values.

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
>
>Write notes explaining each type of operator in C: arithmetic, relational, logical, assignment, increment/decrement, bitwise, and conditional operators.  

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
>
>Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.

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
>
>Explain decision-making statements in C (if, else, nested if-else, switch). Provide examples of each.

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
>
>Write a C program to check if a number is even or odd using an if-else statement. Extend the program using a switch statement to display the month name based on the user’s input (1 for January, 2 for February, etc.).

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
>
>Compare and contrast while loops, for loops, and do-while loops. Explain the scenarios in which each loop is most appropriate.

In C, loops allow repeated execution of a block of code as long as a condition is met. The three primary loop structures—while, for, and do-while—have distinct features and are suitable for different scenarios.

- `while` loop : it is a pre-checking loop so the condition is evaluated before executing the block of code. Thus, it is used were it required to verify the condition before executing a block of code. The code may not execute if the condition is false initially.

e.g., Reading input until the user enters a specific value or processing data until a file ends.

- `for` loop : It is a count-controlled loop, making it ideal when the number of iterations are known beforehand. It combines the initialisation, condition-checking and increment/decrement in a single line. It is best for situations with a fixed number of iterations.

e.g., Iterating over arrays, counting numbers, or running a loop a specific number of times.

- `do..while` loop : This loop is a post-checking loop, i.e., the condition is evaluated after executing the block of code. This loop is used where it is neccessary to execute the block of code atleast once. It is also used where the code is executed first and condition is checked afterwards.

e.g., Menu-driven programs or input validation where initial execution is required.

### LE-06  
>
>Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).  

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
>
>Explain the use of break, continue, and goto statements in C. Provide examples of each.

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
>
>Write a C program that uses the break statement to stop printing numbers when it reaches 5. Modify the program to skip printing the number 3 using the continue statement.

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
>
>What are functions in C? Explain function declaration, definition, and how to call a function. Provide examples.


### LE-08  
>
>Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.
---

```c
```

## 9. Arrays in C  

### Q-09  
>
>Explain the concept of arrays in C. Differentiate between one-dimensional and multi-dimensional arrays with examples.
>
### LE-09  
>
>Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.  

## 10. Pointers in C  

### Q-10  
>
>Explain what pointers are in C and how they are declared and initialized. Why are pointers important in C?
>
### LE-10  
>
>Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.

## 11. Strings in C  

### Q-11  
>
>Explain string handling functions like strlen(), strcpy(), strcat(), strcmp(), and strchr(). Provide examples of when these functions are useful.
>
### LE-11  
>
>Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().  

## 12. Structures in C  

### Q-12  
>
>Explain the concept of structures in C. Describe how to declare, initialize, and access structure members.
>
### LE-12  
>
>Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of structures to store details of 3 students and print them.  

## 13. File Handling in C  

### Q-13  
>
>Explain the importance of file handling in C. Discuss how to perform file operations like opening, closing, reading, and writing files.
>
### LE-13  
>
>Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.
