#include <stdio.h>
#include <math.h>
#define n 5
void sort(int array[n][n]);
void avrg(int array[n][n]);
int main() {
     int array[n][n] ={
             {-12, 7, 23, 13, 4},
             {-5, 23, 45, 67, -2},
             {0, 15, 4, 9, -14},
             {1, -4, 6, -2, 0},
             {3, 33, -1, 0, -78}

     };
    sort(array);
    avrg(array);
    return 0;
}
void sort(int array[n][n]){
    int i, k, j, c;
    for(i = 0; i < n; i++)
    {
        for(k = n-1; k>=0; k--) {
            for (j = 0; j < k; j++) {
                if (array[i][j] < array[i][j + 1]) {
                    c = array[i][j];
                    array[i][j] = array[i][j + 1];
                    array[i][j + 1] = c;
                }
            }
        }
    }
    for(i=0; i<n; i++){
        for (j = 0; j < n; j++) {
            printf("%d\t",array[i][j]);
        }
        printf("\n");

    }
}
void avrg(int array[n][n]) {
    int i,j,s;
    float k = 1;
    for (i = 0; i < n; i++) {
        s = 0;
        for (j = 0; j < n; j++) {
            s += array[i][j];
        }
        float output = (float) s/n;
        k = output*k;

        printf("f() = %f\n",output);
        printf("*() = %f\n",k);
    }
}