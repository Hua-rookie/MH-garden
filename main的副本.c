#include <stdio.h>
int main(int argc, const char * argv[])
{
    int y,m,d,r,x,y1=0,y2=0;
    int R(int ,int ,int);
    scanf("%d%d%d",&y,&m,&d);
    r=R(y,m,d);
    x=r%7+1;
    
    if ((r/(7*13)%5==0))
    {
        switch (x) {
            case 1:
                y1=3;y2=8;
                break;
            case 2:
                y1=4;y2=9;
                break;
            case 3:
                y1=5;y2=0;
                break;
            case 4:
                y1=1;y2=6;
                break;
            case 5:
                y1=2;y2=7;
                break;
            default:
                break;
        }
            
    }
    else if ((r/(7*13)%5==1))
    {
        switch (x) {
        case 2:
            y1=3;y2=8;
            break;
        case 3:
            y1=4;y2=9;
            break;
        case 4:
            y1=5;y2=0;
            break;
        case 5:
            y1=1;y2=6;
            break;
        case 1:
            y1=2;y2=7;
            break;
        default:
            break;}
    }
    else if ((r/(7*13)%5==2))
    {
        switch (x) {
        case 3:
            y1=3;y2=8;
            break;
        case 4:
            y1=4;y2=9;
            break;
        case 5:
            y1=5;y2=0;
            break;
        case 1:
            y1=1;y2=6;
            break;
        case 2:
            y1=2;y2=7;
            break;
        default:
            break;}
    }
    else if ((r/(7*13)%5==3))
    {
        switch (x) {
        case 4:
            y1=3;y2=8;
            break;
        case 5:
            y1=4;y2=9;
            break;
        case 1:
            y1=5;y2=0;
            break;
        case 2:
            y1=1;y2=6;
            break;
        case 3:
            y1=2;y2=7;
            break;
        default:
            break;}
    }
     else
     {
         switch (x) {
         case 5:
             y1=3;y2=8;
             break;
         case 1:
             y1=4;y2=9;
             break;
         case 2:
             y1=5;y2=0;
             break;
         case 3:
             y1=1;y2=6;
             break;
         case 4:
             y1=2;y2=7;
             break;
         default:
             break;}
     }
        if (y1==0&&y2==0)
            printf("Free.\n");
        else
            printf("%d and %d.\n",y1,y2);
    return 0;
}
int R(int y,int m,int d)
{
    int i,months[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (m>2&&((y%4==0&&y%100!=0)||y%400==0))
        d++;
    for (i=0;i<m-1;i++)
    {
        d+=months[i];
    }
    while (y>2012)
    {
        d+=(((y-1)%4==0&&(y-1)%100!=0)||(y-1)%400==0)?366:365;
        y--;
    }
    return (d-100);
}
