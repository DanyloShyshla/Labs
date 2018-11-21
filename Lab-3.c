#include <stdio.h>
#include <math.h>

#define matrix_Size 5

void matrix_Bubble_Sort(int array[matrix_Size][matrix_Size]);

void avrg_Arithmetical_Number(int array[matrix_Size][matrix_Size]);

int main() {
    int array[matrix_Size][matrix_Size] = {
            {-12, 7,  23, 13, 4},
            {-5,  23, 45, 67, -2},
            {0,   15, 4,  9,  -14},
            {1,   -4, 6,  -2, 0},
            {3,   33, -1, 0,  -78}

    };
    matrix_Bubble_Sort(array);
    avrg_Arithmetical_Number(array);
    return 0;
}

void matrix_Bubble_Sort(int array[matrix_Size][matrix_Size]) {
    int row, temporary_Index, column, element;
    for (row = 0; row < matrix_Size; row++) {
        for (temporary_Index = matrix_Size - 1; temporary_Index >= 0; temporary_Index--) {
            for (column = 0; column < temporary_Index; column++) {
                if (array[row][column] < array[row][column + 1]) {
                    element = array[row][column];
                    array[row][column] = array[row][column + 1];
                    array[row][column + 1] = element;
                }
            }
        }
    }
    for (row = 0; row < matrix_Size; row++) {
        for (column = 0; column < matrix_Size; column++) {
            printf("%d\t", array[row][column]);
        }
        printf("\n");

    }
}

void avrg_Arithmetical_Number(int array[matrix_Size][matrix_Size]) {
    int row, column, next_Column;
    float average_Arithmetical_Number = 1;
    for (row = 0; row < matrix_Size; row++) {
        next_Column = 0;
        for (column = 0; column < matrix_Size; column++) {
            next_Column += array[row][column];
        }
        float output = (float) next_Column / matrix_Size;
        average_Arithmetical_Number = output * average_Arithmetical_Number;

        printf("f() = %f\n", output);
        printf("*() = %f\n", average_Arithmetical_Number);
    }
}
