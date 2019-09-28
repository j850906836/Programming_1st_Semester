#include<stdio.h>
#define LINE 1000
	   int a[LINE];

main()
{
				int cnt=0,i,c;
				float up=0,low=0,num=0,alph=0;
				while((c=getchar())!=EOF)
				{		if(c>='A'&&c<='Z')
								up++;
						if(c>='a'&&c<='z')
								low++;
						if(c<='9'&&c>='0')
									num++;
						if(c>='a'&&c<='z'||c>='A'&&c<='Z')
								alph++;
				
								a[cnt++]=c;	
				}
				if(low==0)
					{
						low=1;
						up=0;
					}
				if(alph==0)
					{	
						alph=1;
						num=0;
					}	
			
				printf("Uppercase/Lowercase:%.3f\n",up/low);
				printf("Digit/Alphabet:%.3f\n",num/alph);
				printf("---Reverse---\n");
				for(i=cnt-1;i>=0;--i)
				putchar(a[i]);
				printf("\n");					
								
}						
