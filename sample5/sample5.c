#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

int main(int argc,char *argv[]){

	int a,b,ans;

	printf("a =");
	scanf("%d", &a);
        printf("b =");
	scanf("%d", &b);

	ans = add(a, b);
	printf("add = %d\n",ans);
        ans = sub(a, b);

#include "./sub1"
#include "./sub2"
