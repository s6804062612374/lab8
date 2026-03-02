#include <stdio.h>

int checkscore(char std[]);
int checkno1(char std[]);
char keys[10]={'D','B','D','C','C','D','A','E','A','D'};

int main() {
    int i,no1=0;
    char ans[8][10]={
        {'A','B','A','C','C','D','E','E','A','D'},//7
		{'D','B','A','B','C','A','E','E','A','D'},//6
		{'E','D','D','A','C','B','E','E','A','D'},//5
		{'C','B','A','E','D','C','E','E','A','D'},//4
		{'A','B','D','C','C','D','E','E','A','D'},//8
		{'B','B','E','C','C','D','E','E','A','D'},//7
		{'B','B','A','C','C','D','E','E','A','D'},//7
		{'E','B','E','C','C','D','E','E','A','D'}};//7
	for (i=0;i<8;i++){
		printf("std %d => %d\n", (i+1), checkscore(ans[i]));
		no1 += checkno1(ans[i]);
	}
	printf("number of no.1 correct: %d",no1);
}

int checkno1(char std[]){
		if (std[0]==keys[0]){
				return 1;
		}
		else return 0;
}

int checkscore(char std[]){
	int i,score=0;
	for (i=0;i<10;i++){
			if (std[i] == keys[i]){
				score ++;
			}
		}
	return score;
}
