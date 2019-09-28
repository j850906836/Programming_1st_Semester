#include<stdio.h>
int main()
{
		int c,i,j,Max,Min,total;
		float alphabet[26];
		float Avg;
		float freq[26];
		float arr[26];
		for(i=0;i<26;i++)
				alphabet[i]=0;
				arr[i]=0;
		Max=arr[0];

		while((c=getchar())!=EOF)
		{
				if(c>='A'&&c<='Z')		
						c=tolower(c);
				if(c>='a'&&c<='z')
						++total;
				if(c>='a'&&c<='z')
						++alphabet[c-'a'];
				for(i=97;i<122;i++){
						freq[i]=alphabet[i-97]/total;}
				Avg=1.0/26.0;
				for(i=97;i<122;i++){
				if(arr[i]>Max)
						Max=arr[i];}
		}

		printf("Total:%d\n",total);
		printf("--Alphabet--\n");
		for(i=97;i<122;i++){
				printf("%c:%.f,%.3f\n",i,alphabet[i-97],freq[i]);
		}
		printf("Avg=%.3f\n",Avg);
		for(i=97;i<122;i++){
		printf("Max=%c:\n",i);}
}
