// good2.cpp UVA11332
// 12750051	魏才富
// 12750911	李紫涵
#include <stdio.h>
int main()
{
	int n,s;
	scanf("%d",&n);
	while(n)
	{
		while(n>9)
		{
			s=0;
			while(n)
			{
				s+=n%10;
				n/=10;
			}
			n=s;
		}
		printf("%d\n",n);
		scanf("%d",&n);
	}
}
