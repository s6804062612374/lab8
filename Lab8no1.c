#include <stdio.h>

void addthree(int number[5], int pos[][2]); 

int main(){
	int i;
	int number[5] = {20,50,100,199,9};
	int pos[][2] = {{3,5},{0,4}};
	
	addthree(number, pos);
	
	for (i=0;i<5;i++){
		printf("%d ",number[i]);
	}
}

void addthree(int number[5], int pos[][2]){
	int i,n=2;
	for (i=0;i<n;i++){
		number[pos[i][0]] += pos[i][1];
	}
}
