/*
 * C Variable Value
 * 
 * Change Variable Values =>
 * Example:
 * int myNum = 15; // myNum is 15
 * myNum = 10; // Now myNum is 10
 *
 * You can even copy value into variables that declared earlier without a value:
 * Example:
 * // Create a Variable and assign a Value
 * int myNum = 15;
 *
 * // Declare a variable without assigning
 * int myOtherNum;
 *
 * // Copy the Value from myNum
 * myOtherNum = myNum;
 * // myOtherNum is now 15
 * printf("%d", myOtherNum);
 *
 * And you also update a Variable using its current value:
 * Example
 * int x = 5;
 * x = x + 1;
 * printf("%d", x);
 */

#include <stdio.h>

int main() {
    // 1. Change Variable Values
    int myNum = 15;
    printf("First value: %d \n", myNum);
    myNum = 10; // Now myNum is 10
    printf("Changed value: %d \n", myNum);

    // 2. Copy value to another variable
    int myOtherNum;
    myOtherNum = myNum; // myOtherNum is now 10
    printf("Copied value: %d \n", myOtherNum);

    // 3. Update using current value
    int x = 5;
    x = x + 1;
    printf("Updated x: %d \n", x);

    return 0;
}
