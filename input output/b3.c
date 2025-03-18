#include <stdio.h>
int main(int a,int b)
{
    scanf("%d %d",&a,&b);
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = a / (float) b;
    
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%.2f\n",f);
    
}