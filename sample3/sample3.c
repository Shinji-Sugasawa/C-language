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
	printf("ans = %d\n",ans);

    ans = sub(a, b);
	printf("ans = %d\n",ans);

    ans = mul(a, b);
	printf("ans = %d\n",ans);

    ans = div(a, b);
	printf("ans = %d\n",ans);

    ans = mod(a, b);
	printf("ans = %d\n",ans);



	return 0;
}

int add(int a, int b){

        int ans;

        ans = a + b;
        return ans;
}
int sub(int a, int b){

        int ans;

        ans = a - b;
        return ans;
}
int mul(int a, int b){

        int ans;

        ans = a * b;
        return ans;
}
int div(int a, int b){

        int ans;

        ans = a / b;
        return ans;
}
int mod(int a, int b){

        int ans;

        ans = a % b;
        return ans;
}
