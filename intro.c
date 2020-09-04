#include<stdio.h>
int main()
{
    int a[5],num=1,k;
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    while(1)
    {
        k=0;
        for(int j=0;j<5;j++) if(num%a[j]==0) k++;
        if(k>2) break;
        num++;
    }
    printf("%d",num);

    return 0;
    
}