#include <stdio.h>

void sort(int score[], int n) {
    for (int i=0;i<n-1; i++) {
        for (int j=0;j<n-i-1;j++) {
            if (score[j] < score[j + 1]) {
                int temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
}

int main() {
    int scores[4];
    int sum = 0;

    for (int i=0;i<4;i++) {
        printf("Enter score %d: ",i+1);
        scanf("%d", &scores[i]);
    }

    sort(scores, 4);

    printf("Top 3 scores are: ");
    for (int i=0;i<3;i++) {
        printf("%d ", scores[i]);
        sum += scores[i];
    }

    printf("\nTotal sum of top 3: %d\n", sum);

    return 0;
}
