#include <stdio.h>
/*
1-6
print (getchar() != EOF) value  1/0
print eof value -1
*/
int main () {
    int c;
    c = (getchar() != EOF);
    printf("%d", c);
    printf("%d",EOF);

}
