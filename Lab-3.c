#include <stdio.h>
#include <math.h>

#define MATRIX_SIZE 5

void matrix_bubble_sort(int array[MATRIX_SIZE][MATRIX_SIZE]);

void avrg_arithmetical_number(int array[MATRIX_SIZE][MATRIX_SIZE]);

int main() {
    int array[MATRIX_SIZE][MATRIX_SIZE] = {
            {-12, 7,  23, 13, 4},
            {-5,  23, 45, 67, -2},
            {0,   15, 4,  9,  -14},
            {1,   -4, 6,  -2, 0},
            {3,   33, -1, 0,  -78}

    };
    matrix_bubble_sort(array);
    avrg_arithmetical_number(array);
    return 0;
}

void matrix_bubble_sort(int array[MATRIX_SIZE][MATRIX_SIZE]) {
    int row, temporary_index, column, element;
    for (row = 0; row < MATRIX_SIZE; row++) {
        for (temporary_index = MATRIX_SIZE - 1; temporary_index >= 0; temporary_index--) {
            for (column = 0; column < temporary_index; column++) {
                if (array[row][column] < array[row][column + 1]) {
                    element = array[row][column];
                    array[row][column] = array[row][column + 1];
                    array[row][column + 1] = element;
                }
            }
        }
    }
    for (row = 0; row < MATRIX_SIZE; row++) {
        for (column = 0; column < MATRIX_SIZE; column++) {
            printf("%d\t", array[row][column]);
        }
        printf("\n");

    }
}

void avrg_arithmetical_number(int array[MATRIX_SIZE][MATRIX_SIZE]) {
    int row, column, next_column;
    float avrg_arithmetical_number = 1;
    for (row = 0; row < MATRIX_SIZE; row++) {
        next_column = 0;
        for (column = 0; column < MATRIX_SIZE; column++) {
            next_column += array[row][column];
        }
        float output = (float) next_column / MATRIX_SIZE;
        avrg_arithmetical_number = output * avrg_arithmetical_number;

        printf("f() = %f\n", output);
        printf("*() = %f\n", avrg_arithmetical_number);
    }
}
