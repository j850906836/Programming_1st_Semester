#include<stdio.h>
#include<ctype.h>
#define OUT 0
#define NUM 1
#define ALPHA 2

int main()
{
		int c,nw,state,i,j,max=26,min=26,total;
		float alphabet[26];
		float freq[26];
		float Avg;
		for(i=0;i<26;i++)
		freq[i]=alphabet[i]=0;
		state=OUT;
		nw=total=0;
		printf("   [A]\n\n--Words--\n");
		while((c=getchar())!=EOF){
				if(c==' '||c=='\n'||c=='\t')
						state=OUT;
				else if(state==OUT){
								if(c>='0'&&c<='9')
								state=NUM;
								else if(isalpha(c)){
								state=ALPHA;
								printf("\n");
								++nw;
								}
								}
								if(state==ALPHA)
								printf("%c",c);
								if(c>='A'&&c<='Z')
								c=tolower(c);
								if(c>='a'&&c<='z')
								++total;
								++alphabet[c-'a'];
								}
								
					
								printf("\nWord count:%d\n",nw);
							
								if(total==0){
								for(i=0;i<26;i++)
								freq[i]=freq[i]/1;
								}
								else for(i=0;i<26;i++){
										freq[i]=alphabet[i]/total;}
								
								printf("\n\n   [B]\n\n");
								printf("Total:%d\n",total);
								printf("--Alphabet--\n");
								for(i=0;i<26;i++){
										printf("%c:%.f,%.3f\n",i+'a',alphabet[i],freq[i]);}
										if (total==0)
												printf("Avg=0\n");
								else printf("Avg=%.3f\n",1.0/26.0);
								
								max=alphabet[0];
								for(i=0;i<26;i++){
								if(alphabet[i]>max){
										max=alphabet[i];
										j=i;}
								}
										printf("Max:%c:%d,%.3f\n",j+'a',max,freq[j]);
								min=alphabet[0];
								for(i=0;i<26;i++){
								if(min>alphabet[i]){
										min=alphabet[i];
										j=i;}
								}
										printf("Min:%c:%d,%.3f\n",j+'a',min,freq[j]);
								
										return 0;
							}
