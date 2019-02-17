#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n,i,j,a[200];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  if(a[i]>=18)
  {

      printf("Eligible");
  }
  else
  {

      printf("Ineligible")
  }
  }
      /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
