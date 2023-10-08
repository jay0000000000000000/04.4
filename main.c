#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
  int year;
  
  printf("input a year : ");
  scanf("%d", &year);
  
  if ( (year%4==0 && year%100!=0) || year%400==0 )
      printf( "This is leap year \n");
  else
      printf( "This is not leap year \n");
  system("PAUSE");	
  return 0;
}
