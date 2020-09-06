#include<stdio.h>
#include<string.h>

int main()
{
    char king[3],stone[3],cmd[3];
    int N, king_position[2], stone_position[2],k=1;
    scanf("%s %s %d", king, stone, &N);
    king_position[0]=king[0]-65; king_position[1]=king[1]-49;
    stone_position[0]=stone[0]-65; stone_position[1]=stone[1]-49;
    for(int i=0;i<N;i++)
    {
        scanf("%s",cmd);
        if(!strcmp(cmd,"R"))
        {
            if (king_position[0]+1>7) continue;
            else 
            {
                if(king_position[0]+1==stone_position[0])
                {
                    if(stone_position[0]+1>7) continue;
                    else {king_position[0]++; stone_position[0]++;}
                }
                else king_position[0]++;
            }
        }
        else if(!strcmp(cmd,"L"))
        {
            if(king_position[0]-1<0) continue;
            else 
            {
                if(king_position[0]-1==stone_position[0])
                {
                    if(stone_position[0]-1<0) continue;
                    else{king_position[0]--; stone_position[0]--;}
                }
                else king_position[0]--;
            }
        }
        else if(!strcmp(cmd,"B"))
        {
            if(king_position[1]-1<0) continue;
            else 
            {
                if(king_position[1]-1==stone_position[1])
                {
                    if(stone_position[1]-1<0) continue;
                    else{king_position[1]--; stone_position[1]--;}
                }
                else king_position[1]--;
            }
        }
        else if(!strcmp(cmd,"T"))
        {
            if((king_position[1]+1>7)) continue;
            else 
            {
                if(king_position[1]+1==stone_position[1])
                {
                    if(stone_position[1]+1>7) continue;
                    else{king_position[1]++; stone_position[1]++;}
                }
                else king_position[1]++;
            }
        }
        else if(!strcmp(cmd,"RT"))
        {
            if((king_position[0]+1>7)||(king_position[1]+1>7)) continue;
            else
            {
                if(king_position[0]+1==stone_position[0] &&king_position[1]+1==stone_position[1])
                {
                    if(stone_position[0]+1>7||stone_position[1]+1>7) continue;
                    else{king_position[0]++; stone_position[0]++; king_position[1]++; stone_position[1]++;}
                }
                else {king_position[0]++; king_position[1]++;}
            }
        }
        else if(!strcmp(cmd,"LT"))
        {
            if((king_position[0]-1<0)||(king_position[1]+1>7)) continue;
            else 
            {
                if(king_position[0]-1==stone_position[0]&&king_position[1]+1==stone_position[1])
                {
                    if((stone_position[0]-1<0)||(stone_position[1]+1>7)) continue;
                    else{king_position[0]--; stone_position[0]--; king_position[1]++; stone_position[1]++;}
                }
                else{king_position[0]--; king_position[1]++;}
            }
        }
        else if(!strcmp(cmd,"RB"))
        {
            if((king_position[0]+1>7) ||(king_position[1]-1<0)) continue;
            else 
            {
                if(king_position[0]+1==stone_position[0] &&king_position[1]-1==stone_position[1])
                {
                    if((stone_position[0]+1>7)||(stone_position[1]-1<0)) continue;
                    else{king_position[0]++; stone_position[0]++;king_position[1]--; stone_position[1]--;}
                }
                else{king_position[0]++; king_position[1]--;}
            }
        }
        else
        {
            if((king_position[0]-1<0) ||(king_position[1]-1<0)) continue;
            else 
            {
                if(king_position[0]-1==stone_position[0] &&king_position[1]-1==stone_position[1])
                {
                    if((stone_position[0]-1<0)||(stone_position[1]-1<0)) continue;
                    else{king_position[0]--; stone_position[0]--; king_position[1]--; stone_position[1]--;}
                }
                else {king_position[0]--;king_position[1]--;}
            }
        }
        king[0]=king_position[0]+65; king[1]=king_position[1]+49;
        stone[0]=stone_position[0]+65; stone[1]=stone_position[1]+49;
        printf("%s %s\n",king,stone);
    }
    king[0]=king_position[0]+65; king[1]=king_position[1]+49;
    stone[0]=stone_position[0]+65; stone[1]=stone_position[1]+49;
    printf("%s\n%s",king,stone);

    return 0;
}