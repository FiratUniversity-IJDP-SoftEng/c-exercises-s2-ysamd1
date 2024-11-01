
#include <stdio.h>

int main(void) 
  
   {
    for (int i = 99; i >= 51; i -= 3) {
        printf("%d", i);
        if (i > 51) {
            printf(", ");
        }
    }
    return 0;
}
