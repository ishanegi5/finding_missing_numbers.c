#include<stdio.h>
int main()
{  int i,j,n;
printf("Enter n= ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n-1;i++)
{
    printf("Enter %d element: ",i+1);
    scanf("%d",&arr[i]);
}
printf("Missing number:- ");
for(j=1;j<=n;j++)
{
    int found =0;
    for(i=0;i<n-1;i++)
    {   if(arr[i]==j)
    {
         found=1;
        break;
    }
    
    }
   if(!found)
    {
        printf("%d ",j);
    } 
}
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
