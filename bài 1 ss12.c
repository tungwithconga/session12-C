#include <stdio.h> 

int main (){
int a,b,c;
printf ("Hay nhap vao so a: ");
scanf ("%d",&a);
printf ("Hay nhap vao so b: ");
scanf ("%d",&b);
printf ("Hay nhap vao so c: ");
scanf ("%d",&c);
int sumAAndB = a+b;
int sumBAndC = b+c;
int sumAAndC = a+c;
int SubBAndA = b-a;
int SubCAndB = c-b;
int SubCandA = c-a;
printf("Cap so thu nhat:\n");
printf("%d + %d = %d\n",a,b,sumAAndB);
printf ("%d - %d = %d\n",b,a,SubBAndA);
printf("Cap so thu hai:\n");
printf("%d + %d = %d\n",b,c,sumBAndC);
printf ("%d - %d = %d\n",c,b,SubCAndB);
printf("Cap so thu ba:\n");
printf("%d + %d = %d\n",a,c,sumAAndC);
printf ("%d - %d = %d\n",c,a,SubCandA);




} 
