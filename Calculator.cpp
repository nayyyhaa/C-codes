#include <stdio.h>
#include <conio.h>
#include <math.h>

main ()
{

float n1,n2,result;
char op;


printf("\n type the first number:");
scanf ("%f",&n1);
printf("\n type the second number:");
scanf ("%f",&n2);
printf("\n type the op:");
scanf ("%s",&op);


if (op=='+') {
result=n1+n2;    
printf ("\n O result e: %f",result);
}  

else if (op=='-') {
result=n1-n2;
printf ("\n O result e: %f",result);

}

else if (op=='/') {
result=n1/n2;
printf ("\n O result e: %f",result);

}

else if (op=='*') {
result=n1*n2;
printf ("\n O result e: %f",result);

}
}


