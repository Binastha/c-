#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void merge(int a[],int l,int m,int h)
{
    int temp[50],i,j,k;
    i=l;
    k=l;
    j=m+1;
    while(i<=m&&j<=h)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else{

            temp[k++]=a[j++];
        }
    }
    while(i<=m)
        temp[k++]=a[i++];
        while(j<=h)
            temp[k++]=a[j++];
        for(i=l;i<=h;i++)
            a[i]=temp[i];
}
void merge_sort(int a[],int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        merge_sort(a,l,m);
         merge_sort(a,m+1,h);
          merge(a,l,m,h);
    }
}
void main()
{
    int a[50],n,i,l,h;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\nEnter %d elements of list:",n );
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    l=0;
    h=n-1;
    printf("/nArray before sorting:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    merge_sort(a,l,h);
    printf("\nArray after sorting:");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
 getch();    }
}


