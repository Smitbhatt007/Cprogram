#include <stdio.h>
#include <stdlib.h>

void  main()
{
     int a,b,c;

     scanf("%d %d %d",&a,&b, &c);

     if(a&&b<c){
        printf("%d",c);
     }
     else if (b&&c<a){
        printf("%d",a);
     }
    else{
    printf("%d",b);
 }

}
