#include<stdio.h>
int main()
{
    int a[100],low=0,high,n,e,i,mid;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    if (n<100)
    {
        printf ("Enter the numbers :\n");
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the elements to be searched : ");
        scanf("%d",&e);
        high=n;
        mid=(low+high)/2;
        while(low<=high)
        {
            if(a[mid]==e){
                printf("Element found at %d index",mid);
                return 0;}
            else if (a[mid]<e)
                low=mid+1;
            else
                high=mid-1;
            mid=(low+high)/2;
        }
        if (low>high)
        printf("Element not found");
        return 0;
    }
    else
    {
        printf("Limit Reached");
        return 0;
    }
    
}