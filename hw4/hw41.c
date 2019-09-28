#include<stdio.h>
#define ALPHA 2
#define OUT 0
#define NUM 1
main()
{
		int c,nw,state;

		state=OUT;
		nw=0;
		printf("--Words--");
		while((c=getchar())!=EOF){
				
			 if(c==' '||c=='\n'||c=='\t')
					state=OUT;
					
					else if(state==OUT){
						 if(c>='0'&&c<='9')
							 state=NUM;
						 else{
							state=ALPHA;
							printf("\n");
							++nw;}
					}
							if(state==ALPHA)
							printf("%c",c);
						}
						printf("\n--------\n");
printf("Word count:%d\n",nw);	
}

