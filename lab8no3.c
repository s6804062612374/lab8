#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random1to100();
void printAr(int numAr[], int numArSize);
int checkNum(int numAr[], int numArSize);
int searchNum(int numAr[], int numArSize, int target);
void sortAr(int numAr[], int numArSize);

int main() {
    int N, i;
    int A[100];
    
    if (scanf("%d", &N) != 1) return 0;
    if (N > 100) N = 100;
    
    srand(time(NULL));
    
    for (i = 0; i < N; i++) {
        sortAr(A, i); 
        A[i] = checkNum(A, i);
    }
       
    printf("\n********\n");
    sortAr(A, N);
    printAr(A, N);
    
    return 0;
}

void printAr(int numAr[], int numArSize) {
    for (int i = 0; i < numArSize; i++)
        printf("%d ", numAr[i]);
    printf("\n");
} 

int checkNum(int numAr[], int numArSize) {
    int rnum = random1to100();
    while (searchNum(numAr, numArSize, rnum)) {
        rnum = random1to100();
    }
    return rnum;
}

int searchNum(int numAr[], int numArSize, int target) {
    int low = 0;
    int high = numArSize - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (numAr[mid] == target)
            return 1;
        if (numAr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

void sortAr(int numAr[], int numArSize) {
    for (int i = 0; i < numArSize - 1; i++) {
        for (int j = 0; j < numArSize - i - 1; j++) {
            if (numAr[j] > numAr[j + 1]) {
                int temp = numAr[j];
                numAr[j] = numAr[j + 1];
                numAr[j + 1] = temp;
            }
        }
    }
}

int random1to100() {
    return (rand() % 100) + 1;
}
