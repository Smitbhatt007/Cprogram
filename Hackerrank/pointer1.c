
#include <math.h>

void update(int  *p,int *q) {
    int c,d;
    c= *p+*q;
    d= (*p-*q);
    d= abs(d);
    
    
    printf("%d\n",c);
     printf("%d\n",d); 
      
}

int main() {
    int a, b;
    int *p , *q;
    
    
    scanf("%d %d", &a, &b);
    p=&a ; q=&b; 
    update(p, q);
    

    return 0;
}
