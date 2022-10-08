#include <stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE FIRST NUMBER:\n");
	scanf("%d",&a);
	printf("ENTER SECOND NUMBER:\n");
	scanf("%d",&b);
	if (b==0){
		printf("DIVIDE BY ZERO ERROR!!! EXITING");}
	else{
		c=a/b;
		printf("DIVISION OF ABOVE NUMBERS IS:""%d",c)}
}
