#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long long int a[1000], i, j, k = 0,n,t;
  long long int b[1000];
  scanf("%lld %lld",&n,&t);
  for(i=0;i<t;i++)
  {
      scanf("%lld",&b[i]);
  }


  memset(a, 0, sizeof(a));
  a[0] = 1;
  for (i = 0; i < t; i++) {
    for (k = 0, j = b[i]; j <= n; k++, j++) {
      if (a[k])
      {
      a[j] = a[j] + a[k];
      }
     // printf("%d",a[k]);    
    }
  }
  printf("%lld", a[n]);
  return 0;
}
//96190959
