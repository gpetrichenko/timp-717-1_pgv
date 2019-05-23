#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1,x,summ=0;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&x);
		summ=summ+(pow(x,2));
		i++;
	}
	printf("\n%d\n",summ);
	return 0;
}

