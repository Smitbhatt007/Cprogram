#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    if (a > b && a > c && a > d)
    {
        return a;
    }else if( b > a && b > c && b > d)
    {
        return b;
    }else if( c > a && c >b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
    
    
}


int main() {
    int x[3];
    
    scanf("%d %d %d %d", &x[0], &x[1], &x[2], &x[3]);
    int ans = max_of_four(x[0], x[1], x[2], x[3]);
    printf("%d",ans);
    return 0 ;
}
