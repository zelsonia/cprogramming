#include <stdio.h>
/*
    输入复制到输出，用多个空格用一个空格替换
*/
int main() {
    int c,space;
    space=0;

     while((c= getchar()) != EOF) {
        if (c == ' ') {
            space = 1;
        } else {
            if(space == 1) {
                putchar(' ');
                space = 0;
            }
            putchar(c);
        }


    }
}
