#include<stdio.h>
int main()
{
	int i,j;
	int n=4;
	for(i=0; i<5; i++){
		for(j=0; j<n; j++){
			printf(" ");
		}
		n--;
		for(j=0; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
