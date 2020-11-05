#include <stdio.h>

int main(void)
{
    int b=0;
    int c=1;
    int a[]={1,2,3};
    printf("Loops execution...\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("My love miri\n");
    }
    printf("While loop\n");
    while(b<5)
    {
        printf("%d\n",b);
        b++;
    }
    printf("Arrays...\n");
    for(int i=0; i<3; i++)
    {
        printf("[%d] : %d\n",i,a[i]);
    }
    
    printf("Switch...\n");
    switch (c)
    {
    case 1:
        printf("Monday\n");
        break;
    
    default:
        printf("Error!");
        break;
    }
    return 0;
}
