#include<stdio.h>
void main()
{
	int index,s,n,m,i,j,k,pf=0,f=0;
	printf("Enter the number of pages : ");
	scanf("%d",&n);
	printf("Enter the size of cache memory : ");
	scanf("%d",&m);
	int a[n],b[m],c[m];
	printf("Enter the page number of each page : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
		c[i]=0;
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		f=1;
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				f=0;
				c[j]=i+1;
				break;
			}
		}
		if(f==1)
		{
			s=c[0];
			index=0;
			for(k=0;k<m;k++)
			{
				if(c[k]<s)
				{
					s=c[k];
					index=k;
				}
			}
			b[index]=a[i];
			c[index]=i+1;
			pf++;
		}
	}
	for(i=0;i<m;i++)
		printf("%d\t",b[i]);
	printf("\nNumber of page faults : %d",pf);
}
