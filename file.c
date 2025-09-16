#include<stdio.h>

//Write a program to for selection sorting
int main()
{
    int n;
    printf("Enter the no of elements you want to insert: ");
    scanf("%d",&n);
    int arr[n],k,j,i,temp;
    for(k=0;k<n;k++)
        scanf("%d",&arr[k]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

}
