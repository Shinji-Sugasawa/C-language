#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

int main(){

	int a,b,ans;

	printf("a =");
	scanf("%d", &a);
        printf("b =");
	scanf("%d", &b);

	ans = add(a, b) + sub(a,b) ;
        printf("2*a = %d\n",ans);
        ans = mul(a, b) * div(a,b);
        printf("a*a = %d\n",ans);

	return 0;
}
