/*
 * Declare Multiple Variables
 *
 * Example ->
 * int x = 5, y = 6, z = 50;
 * printf("%d", x + y + z);
 *
 * And you can assign the Same Value to multiple Variable at once
 * Example ->
 * int x, y, z;
 * x = y = z = 50;
 * printf("%d", x + y + z);
 *
 * C Variable Names (Identifiers)
 * All C variable must be identified with unique names.
 * These unique names are called identifiers.
 * Identifiers can be Short names (like x and y) or
 * more descriptive name (age, sum, totalVolume).
 *
 * Example -
 * // Good Variable name
 * int minutesPerHour = 60;
 *
 * // OK, but not so easy to understand what m actually is
 * int m = 60;
 *
 * The general rules for naming variable are:
 * - Names can contain letters, digits and underscores
 * - Names must begin with a letter or an underscore (_)
 * - Names are Case-Sensitive (myVar and myvar are diff Variables)
 */

#include <stdio.h>

int main() {
    // 1. Declare Multiple Variables in one line
    int x = 5, y = 6, z = 50;
    printf("Sum of x+y+z: %d \n", x + y + z);

    // 2. Assign same value to multiple variables
    int a, b, c;
    a = b = c = 50;
    printf("Sum of a+b+c: %d \n", a + b + c);

    // 3. Good vs Bad variable names
    int minutesPerHour = 60; // Good - descriptive
    int m = 60;              // OK but not clear
    
    printf("minutesPerHour: %d \n", minutesPerHour);
    printf("m: %d \n", m);

    return 0;
}
