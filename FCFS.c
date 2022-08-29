#include<stdio.h>
int main()
{
 int n,j,i;
 printf("Enter the no. of processes:");
 printf("enter no of proccess you want:");
    scanf("%d",&n);
 int a[n],bt[n],tat[n],wt[n],ct[n],at[n];
 float awt,wts=0;
 printf("enter burst time:");
 for(i=0;i<n;i++)
    scanf("%d",&bt[i]);
 printf("enter arrival time:");
 for(i=0;i<n;i++)
    scanf("%d",&at[i]);
 for(i=0;i<n;i++)
    a[i]=i+1;
    ct[0]=bt[0];
 for(i=1;i<n;i++)
    ct[i]=ct[i-1]+bt[i];
 for(i=0;i<n;i++)
    tat[i]=ct[i]-at[i];
 for(i=0,j=0;i<n;i++,j++)
    wt[i]=tat[i]-bt[j];
 printf("\nprocess\tBT\tAT\tCT\tTAT\tWT");
 for(i=0;i<n;i++)
  {
    printf("\nP%d\t%d\t%d\t%d\t%d\t%d",a[i],bt[i],at[i],ct[i],tat[i],wt[i]);
  }
for(i=0;i<n;i++)
  {
    wts=wts+wt[i];
  }
   awt=wts/n;
   printf("\naverage waiting time:%f",awt);
 return 0;
}
