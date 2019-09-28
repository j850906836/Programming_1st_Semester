#include<stdio.h>

int main()
{
		int i,n,space,star;
		scanf("%d",&n);
		if(n%2==0)
		{
				printf("n is not an odd number\n");
				return 0;
		}

		space=n/2;
		star=1;
		while(space>=0)
		{
			for(i = 0; i < space; i++)
				printf(" ");
			for(i = 0; i < star; i++)
				{printf("*");}
				printf("\n");
				
				space--;
				star+= 2;
		}
		while(star>=0)
		{
			for(i = space+2; i > 0; i--)
					printf(" ");
			for(i = star-4; i > 0; i--)
					printf("*");
					printf("\n");
					space++;
					star-= 2;
		}
		return 0;
}
