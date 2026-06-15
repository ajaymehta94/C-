// C Introduction 







 // C Syntax - Lets understand what is each part does:

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
