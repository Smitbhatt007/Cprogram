#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a&1 == 1)
    {
        printf("%d is an odd number\n",a);
    }
    else{
        printf("%d is an even number\n",a);
    }
    
    return 0;
}