#include <stdio.h>


int check_value(int A[], int valueA);
void delete_element(int A[], int pos);

static int SIZE=10;

int main() {
    int A[SIZE];
    int value, pos;

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &A[i]);
    }
    
    while (1) {
        scanf("%d", &value);
        if (value == -1) {

            for (int i = 0; i < SIZE; i++) {
                printf("%d ", A[i]);
            }
            printf("\n");            
            break;
        }
        pos = check_value(A, value);
        if (pos == -1) {
        } else {
            delete_element(A, pos);
            for (int i = 0; i < SIZE; i++) {
                printf("%d ", A[i]);
            }
            printf("\n");
        }
    }
    
    
    return 0;
}

int check_value(int A[], int valueA) {
    for (int i = 0; i < SIZE; i++) {
        if (A[i] == valueA) {
            return i;
        }
    }
    return -1;
}

void delete_element(int A[], int pos) {
    for (int i = pos; i < SIZE - 1; i++) {
        A[i] = A[i + 1];
    }
    SIZE--;
}
