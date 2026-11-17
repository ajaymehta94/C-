// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    printf("Try clicking the Run button.");
    int ages[] = {20,22,18,35,48,26,87,70};
        float avg,sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (i  = 0;i < length;i++) {
    sum += ages[i];
    }

    avg = sum / length;

    printf("The average age is  :%.2f",avg);
        
    return 0;





    
}
