#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int s,t;
  char str[256];
  srand(time(NULL));

  s = rand() % 6 + 1;
  t = rand() % 6 + 1;
  printf("What is your name?\n");
  printf(">");
  scanf("%s",str);
  printf("Hello,%s!\n",str);
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",s);
  printf("Die 2: %d\n",t);
  printf("Total Value: %d\n",s+t);

  if(s+t>=7){printf("%s won.\n",str);}
  else if(s+t<7){printf("%s lose.\n",str);}
  
  return 0;
  
}
