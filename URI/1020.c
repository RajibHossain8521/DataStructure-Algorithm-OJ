#include<stdio.h>
int main()
{
    int days,month,year,extra;
    scanf("%d",&days);
    year = days/365;
    extra = days%365;

    month = extra/30;
    days = extra%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,days);
    return 0;
}

