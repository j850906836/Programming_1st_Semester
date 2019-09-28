#include<stdio.h>
#include<string.h>
double adjustScore(double score)
{		
		double small=0.0001;
		double low,high,k;
		double mid=0;
		if(score==0)
				return 0;
		if(score<1)
		{low=0,high=1;}
		else	{low=1,high=score;}

		while(high-low>small)
		{
				k=high+low;
				mid=k/2;
				if(mid*mid>score)
						high=mid;
				else
				{low=mid;}
		}	

		return mid*10;
}

int main()
{
		char alpha[1000][15],st[15];
		int i=0,j=0,a=0,b=0,maxid=0,minid=0,k=0;
		double calavg=0,proavg=0,linavg=0,tmp=0,totalcal=0,totalpro=0,totallin=0;
		double cal[1000],pro[1000],lin[1000],id[1000],avg[1000];
		double maxcal=cal[0],mincal=cal[0],maxpro=pro[0],minpro=pro[0],maxlin=lin[0],minlin=lin[0];
		char c = '\0';

		while(scanf("%lf %lf %lf",&cal[i],&pro[i],&lin[i])!=EOF)
		{		
		
				for(i = 0;i<1000;i++)
				{
						while((c = getchar()) >= 'a' && c <= 'z')
						{
								alpha[i][j] = c;
								j++;
						}
						for(;j <15;j++)
								alpha[i][j] = '\0';
				}
				cal[i]=adjustScore(cal[i]);
				pro[i]=adjustScore(pro[i]);
				lin[i]=adjustScore(lin[i]);
				avg[i]=(cal[i]+pro[i]+lin[i])/3;
				i++;
		}

		printf("%s  %.1lf\n" , alpha[0] , cal[0]);
		/*for(j=0;j<i;j++)
		{
				if(cal[j]>maxcal)
						maxcal=cal[j];
				if(cal[j]<maxcal)
						mincal=cal[j];
				if(pro[j]>maxpro)
						maxpro=pro[j];
				if(pro[j]<maxpro)
						minpro=pro[j];
				if(lin[j]>maxlin)
						maxlin=lin[j];
				if(lin[j]<maxlin)
						minlin=lin[j];
		}
		for(j=0;j<i;j++)
		{
				totalcal = totalcal+cal[j];
				calavg=totalcal/(double)i;

				totalpro = totalpro+pro[j];
				proavg=totalpro/(double)i;

				totallin = totallin+lin[j];
				linavg=totallin/(double)i;
		}
		for(a=0;a<i-1;a++)
		{
				k=i;strcpy(st,alpha[i]);
				for(b=i+1;b<i;b++)
				{
						if(strcmp(alpha[i],st)<0)
						{k=j;strcpy(st,alpha[i]);}
						if(k!=i)
						{
								strcpy(st,alpha[i]);
								strcpy(alpha[i],alpha[k]);
								strcpy(alpha[k],st);

								tmp=cal[b];
								cal[b]=cal[b+1];
								cal[b+1]=tmp;

								tmp=pro[b];
								pro[b]=pro[b+1];
								pro[b+1]=tmp;

								tmp=lin[b];
								lin[b]=lin[b+1];
								lin[b+1]=tmp;}
				}
		}		
		printf("%s\n",alpha[i]);							
		printf("Name | Calculus | Programming | Linear Algebra | Average\n");
		printf("------------------------------------------------------\n");
		for(j=0;j<i;j++)
		{printf("%s  | %.1lf     | %.1lf        | %.1lf           | %.1lf\n",alpha[i],cal[j],pro[j],lin[j],avg[j]);}
		printf("------------------------------------------------------\n");
		printf("Max| %.1lf     | %.1lf        | %.1lf\n",maxcal,maxpro,maxlin);
		printf("Min| %.1lf     | %.1lf        | %.1lf\n",mincal,minpro,minlin);
		printf("Avg| %.1lf     | %.1lf        | %.1lf\n",calavg,proavg,linavg);*/
		return 0;
}
