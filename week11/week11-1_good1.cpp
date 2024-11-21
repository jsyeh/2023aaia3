// good1.cpp UVA11332
// 12750156	黃映綺
#include <stdio.h>
int f(int n)
{
	if(n==0) return 0;
	int ans=n%9;
	if(ans==0) return 9;
	else return ans;
}
int main()
{
	int a;
	while(scanf("%d", &a) && a!=0 ){
		printf("%d\n", f(a));
	}
}
