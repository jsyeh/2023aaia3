#include <stdio.h>
int main()
{
	int a[20];
	int now;
	int N = 0;

	while( scanf("%d", &now) == 1 ){
		if(now==0) break;
		a[N++] = now;
	}

	scanf("%d", &now);
	int ans = 0;
	for(int i=0; i<N; i++){
		if(a[i]==now) ans++;
	}
	printf("%d\n", ans);
}
