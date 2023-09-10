#include <stdio.h>
int main()
{
   int a,b,c;
   scanf("%d\n%d\n%d",&a,&b,&c);
   if(a>b)

    if (a>c)
    printf("a is greatest\n");
    else
    printf("c is gretest\n ");
 else
    if (b>c)
    printf("b is gretest\n");
    else
    printf("c is gretest\n");



 if(a>b)
if (b>c)
    printf("c is lowest\n");
    else
    printf("b is lowest\n ");
 else
    if (c>a)
    printf("a is lowest\n");
    else
    printf("c is lowest\n");

if (a>b)
  if (b>c)
     printf("b is middle\n");
  else
       if (a>c)
         printf("C is middle\n");
       else
         printf("a is middle\n");
else
    if (a>c)
       printf("a is middle\n");
    else
         if(b>c)
       printf("c is middle\n");
         else
       printf("b is middle\n");


}
