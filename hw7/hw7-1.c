#include<stdio.h>
int GCD(int x,int y)
{
		int max,min,tmp=1;
		if(x>y)
		{
			max=x;
			min=y;
		}
		if(x<y)
		{
			max=y;
			min=x;
		}
		while(tmp!=0)
		{
			tmp=max%min;
			max=min;
			min=tmp;
		}
		return max;
}
int LCD(int x,int y)
{
		int max,min,tmp=1,r;
		if(x>y)
		{	max=x;
			min=y;
		}
		if(x<y)
		{
			max=y;
			min=x;
		}
		while(tmp!=0)
		{
			tmp=max%min;
			max=min;
			min=tmp;
		}
		r=(x/max)*(y/max)*max;
		return r;
}

int main()
{
		int a,b,x,y,i,n;
		while(scanf("%d %d",&x,&y)!=EOF)
		{
			printf("--%d,%d--\n",x,y);
			a=GCD(x,y);
			b=LCD(x,y);
			printf("GCD=%d\n",a);
			printf("LCD=%d\n",b);
		}
}


