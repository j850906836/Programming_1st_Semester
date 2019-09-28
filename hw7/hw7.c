#include<stdio.h>
int isPrime(int x)
{
		int i;
		if(x<2)
				return 0;
		if(x==2)
				return 1;				
		
		for(i=2;i<x;i++)
		{
			if(x%i==0)
					return 0;
		}
		return 1;			
}
void sort(int data[1000],int len)
{
	int j,k,tmp;
	for(j=0;j<len;j++)
	{
		for(k=0;k<len-j-1;k++)
		{
			if(data[k]>data[k+1])	
			{
				tmp=data[k];
				data[k]=data[k+1];
				data[k+1]=tmp;
			}
		}
	}
}
int main()
{		
		int n,k,data[1000]={0},len=0;
		int i=0;
		printf("--isPrime--\n");
		while(scanf("%d",&n)!=EOF)
		{  
			data[i++]=n;	
			printf("%d:",n);
			n=isPrime(n);
			if(n==0)
					printf("no\n");
			if(n==1)
					printf("yes\n");
				
			len=i;	
			sort(data,len);
		}
			printf("--sort--\n");
			for(k=0;k<len;k++)
			printf("%d\n",data[k]);
			

}					
