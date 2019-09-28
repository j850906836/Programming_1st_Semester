#include<stdio.h>
#define TNOCHAR
int main()
{
		int c,i,j;
		int character[i];
		for(i=0;i<10;++i)
				character[i]=0;

				while((c=getchar())!=EOF)
						++character[c];
						for(i=48;i<57;++i)
						{
								putchar(i);
								for(j=0;j<character[i];++j)
										putchar('*');
										putchar('\n');
						}
						return 0;
}
