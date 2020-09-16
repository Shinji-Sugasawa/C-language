#include <stdio.h>

#include "shinji.h"

int main(int argc,char *argv[]){

	int a,b,ans;

	printf("a =");
	scanf("%d", &a);
        printf("b =");
	scanf("%d", &b);

	ans = add(a, b);
	printf("add = %d\n",ans);
        ans = sub(a, b);
        printf("sub = %d\n",ans);
        ans = mul(a, b);
        printf("mul = %d\n",ans);
        ans = div(a, b);
        printf("div = %d\n",ans);
        ans = mod(a, b);
        printf("mod = %d\n",ans);
	return 0;
}
