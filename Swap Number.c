#include<stdio.h>
int main() {
      int first, second, third;
      printf("ENTER FIRST NUMBER: ");
      scanf("%d", &first);
      printf("ENTER SECOND NUMBER: ");
      scanf("%d", &second);
      third = first;
      first = second;
      second = third;
      printf(" AFTER SWAPPING FIRST NUMBER = %d \n", first);
      printf("AFTER SWAPPING SECOND NUMBER = %d", second);
      return 0;
}
