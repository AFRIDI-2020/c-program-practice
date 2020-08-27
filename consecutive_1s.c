#include<stdio.h>

int main()
{
    int n,i,a[2000],j=-1,k,count, max=0;
    scanf("%d",&n);

    while(n!=0){
        j++;
        a[j]=n%2;
        n=n/2;
    }

    for(i=0;i<=j;i++)
    {
        count =0;
        for(k=i;k<=j;k++)
        {
            if(a[k]==1){
                count++;
            }
            else{
                break;
            }
        }
        if(count>max){
            max=count;
        }
    }


        printf("%d\n",max);


    return 0;
}
