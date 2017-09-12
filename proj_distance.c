#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if(argc == 3){
    int a,b;
    sscanf(argv[1], "%i", &a);
    sscanf(argv[2], "%i", &b);
    int distance = sqrt((a-b)*(a-b));
    printf("The distance between %i and %i is %d.\n", a, b, distance);
  }else{
    printf("You need two arguments.\n");
  }
  return 0;
}
