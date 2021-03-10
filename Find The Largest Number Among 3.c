#include <stdio.h>
int 
main () 
{
  
float a, b, c;
  
printf ("ENTER FIRST NUMBER:");
  
scanf ("%f", &a);
  
printf ("ENTER SECOND NUMBER:");
  
scanf ("%f", &b);
  
printf ("ENTER THIRD NUMBER:");
  
scanf ("%f", &c);
  
 if (a >= b && a >= c)
printf ("%f"" is The largest Number",a);

 if (b >= a && b >= c)
printf ("%f" " is The largest Number",b);

 if (c >= a && c >= b)
printf ("%f" " is the largest Number",c); 
 return 0;

}