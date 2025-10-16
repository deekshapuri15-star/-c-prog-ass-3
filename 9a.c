#include <stdio.h>
int main() {
	  int n,fact,count;
	  printf("enter a no");
	  scanf("%d",&n);
	  fact=1;
	  for(count=1;count<=n;count++){
      fact=fact*count;
	  }
	  printf("%d",fact);
	  return 0;
	  
	} 

