#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d, w, y;
    printf("Input:\n");
    printf("Enter days:");
    scanf("%d",&n);
    y=n/365;
    w=(n%365)/7;
    d=n-((y*365)+(w*7));
    printf("Output:\n");
    printf("Year:%d\n",y);
    printf("Weeks:%d\n",w);
    printf("Days:%d\n",d);
    return 0;
}
