#include <stdio.h>

int main() {
   int i, j, es_primo;
   for(i=1; i<=50; i++) {
      es_primo = 1;
      for(j=2; j<=i/2; j++) {
         if(i%j == 0) {
            es_primo = 0;
            break;
         }
      }
      if(es_primo == 1) {
         printf("%d ", i);
      }
   }
   return 0;
}
