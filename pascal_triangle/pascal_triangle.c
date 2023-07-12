#include<stdio.h>
int main(){
	int i, j, n, x;
	printf("Enter size of triangle: ");
	scanf("%d", &n);
	printf("Enter character value for triangle: ");
	scanf("%d", &x);
	for(i=0;i<=n;i++){
		for(j=0;j<=n-i;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			char ch = x;
			printf("%c ", ch);
		}
		printf("\n");
	}
	return 0;
}
