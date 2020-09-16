#include <stdio.h>

#include "shinji.h"

int main(int argc,char *argv[]){

	int a,b,ans;

	printf("a =");
	scanf("%d", &a);
        printf("b =");
	scanf("%d", &b);

	ans = expa(a);
	printf("a * a = %d\n",ans);
    ans = expb(b);
    printf("b * b = %d\n",ans);
    
	return 0;
}
