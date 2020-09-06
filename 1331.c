#include<stdio.h>
#include<string.h>
int load[6][6];

int main()
{
    int vaild = 1;
    char f[2]; 
    int s_1,s_2;
    for(int i=0;i<36;i++)
    {
        scanf("%s",&f);
        s_1=(f[0]-0.0)-65;
        s_2=f[1]-49;
        if(load[s_1][s_2]==0) load[s_1][s_2]=1;
        else 
        {
            vaild=0;
            break;
        }
    }
    if(vaild==1) printf("Valid");
    else printf("Invalid");
    
    return 0;
}