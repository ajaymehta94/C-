// C Introduction 







 // 1 . C Syntax - Lets understand what is each part does:

/*
 * Line 1: #include <stdio.h> tells C to include a header file.
 * This header lets us use input/output functions such as printf()
 *
 * Line 2: main() is a special function your program starts running here.
 * Any Code inside the curly brackets {} will be executed.
 *
 * Line 3: printf() is a function used to output (print) text to the screen.
 * In our example, it prints Hello World!
 *
 * Note: Every C statements ends with a Semicolon ;
 * Remember: The Compiler ignores extra Spaces and new lines,
 * but using multiple lines make Code easier to read.
 *
 * Line 4: return 0 ends the main() function and sends a value back to the o.s.
 * "0 means everything worked"
 *
 * Line 5: Do not forget the Closing curly bracket } to end the main() fn.
 */

#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}

//Bash code 
//gcc hello.c -o hello
// ./hello


 
 // 2 .  C Statements
 /* 
 * Statements: A C.P. is a list of instructions that a Computer follows.
 * In C, these inst. Called statements
 * Example - printf("Hello World");
 * 
 * This types program Contains three statements
 * 1. printf("Hello World!");
 * 2. printf("Have a good day!");
 * 3. return 0;
 *
 * C Output (Print Text)
 * C New Lines =>
 * printf("Hello World! \n");
 * printf("I am lerning C.");
 *
 * * \n is called an escape Sequence.
 *
 * C Comments => Comments are ignored by the Compiler
 * Single-line Comments
 * // This is a Commet
 *
 * Multi-line Comments
 * /* The Code below will print words Hello World ! to the Screen */
 */

#include <stdio.h>

int main() {
    // This program contains three statements
    
    printf("Hello World!"); // Statement 1
    printf("Have a good day!"); // Statement 2

    // C New Lines Example
    printf("Hello World! \n"); // \n is called an escape Sequence
    printf("I am learning C.");

    return 0; // Statement 3
}
//Bash code 
//gcc statements.c -o statements
// ./statements
/* Output 
Hello World!Have a good day!Hello World! 
I am learning C.*/
 

 
