#include<stdio.h>
double adjustbonus(double score)
{       double small=0.00001;
		double low,high,k;
		double mid=0;
		score=score*score;
		if(score==0)
				return 0;
				if(score<1)
				{low=0,high=1;}
				else    {low=1,high=score;}
				while(high-low>small)
				{
						k=high+low;
						   mid=k/2;
			       if(mid*mid*mid*mid*mid>score)
	                       high=mid;
	                     else
						 {low=mid;}
				}
				return mid*12+25;
}

int main()
{
		int i=0,j=0,a=0,b=0,maxid=0,minid=0;
	double calavg=0,proavg=0,linavg=0,tmp=0,totalcal=0,totalpro=0,totallin=0;
		double cal[1000],pro[1000],lin[1000],id[1000],avg[1000],alpha[1000];
		double maxcal=cal[0],maxpro=pro[0],maxlin=lin[0];

		while(scanf("%lf %lf %lf",&cal[i],&pro[i],&lin[i])!=EOF)

		{
				id[i]=i;
                cal[i]=adjustbonus(cal[i]);
                pro[i]=adjustbonus(pro[i]);
		        lin[i]=adjustbonus(lin[i]);
		        avg[i]=(cal[i]+pro[i]+lin[i])/3;
		        i++;
		}
		double mincal = cal[0] , minpro = pro[0] , minlin = lin[0];
		
		for(j=0;j<i;j++)
		{
				if(cal[j]>maxcal)
						maxcal=cal[j];
				else if(cal[j]<mincal)
						mincal=cal[j];
				if(pro[j]>maxpro)
						maxpro=pro[j];
				else if(pro[j]<minpro)
                        minpro=pro[j];
		          if(lin[j]>maxlin)
		                maxlin=lin[j];
		        else if(lin[j]<minlin)
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
                 	 for(b=0;b<i-a-1;b++)
                 	 	{
                 	 		if(avg[b]<avg[b+1])
                 	 			{
                 	 					tmp=avg[b];
                                        avg[b]=avg[b+1];
                                        avg[b+1]=tmp;
										
										tmp=cal[b];								
										cal[b]=cal[b+1];
								        cal[b+1]=tmp;

								        tmp=lin[b];
								        lin[b]=lin[b+1];
								        lin[b+1]=tmp;

								        tmp=id[b];
								        id[b]=id[b+1];
								        id[b+1]=tmp;
								  }
						}
			}
		printf("ID | Calculus | Programming | Linear Algebra | Average\n");
		printf("------------------------------------------------------\n");
		for(j=0;j<i;j++)
		{printf("%.lf  | %.1lf     | %.1lf        | %.1lf           | %.1lf\n",id[j],cal[j],pro[j],lin[j],avg[j]);}
		printf("------------------------------------------------------\n");
		printf("Max| %.1lf     | %.1lf        | %.1lf\n",maxcal,maxpro,maxlin);
		printf("Min| %.1lf     | %.1lf        | %.1lf\n",mincal,minpro,minlin);
		printf("Avg| %.1lf     | %.1lf        | %.1lf\n",calavg,proavg,linavg);
		return 0;

}
