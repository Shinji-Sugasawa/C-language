#include <stdio.h>

int add(int a,int b);

int main(int argc,char *argv[]){

	int a,b,ans;

	printf("a =");
	scanf("%d", &a);
        printf("b =");
	scanf("%d", &b);

	ans = add(a, b);
	printf("ans = %d\n",ans);

	return 0;
}

int add(int a, int b){

	int ans;

	ans = a + b;
	return ans;
}