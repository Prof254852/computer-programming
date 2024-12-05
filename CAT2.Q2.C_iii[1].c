#include <stdio.h>

int main() {
    // Declaring and initializing the 2D array
    int scores[2][2] = {{50, 65}, {90, 80}};
    
    // Using a nested for loop to print the elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}