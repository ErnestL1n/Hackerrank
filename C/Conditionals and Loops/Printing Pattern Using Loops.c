#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int len=2*n-1;
      for(int i=1;i<=len;++i){
          for(int j=1;j<=len;++j){
              int mini=i<=len-i?i-1:len-i;
              int minj=j<=len-j?j-1:len-j;
              printf("%d ",n-(mini<=minj?mini:minj));
          }
          printf("\n");
      }
    return 0;
}