#include <stdio.h>
/*
    输入复制到输出，制表符替换为\t 回退符\b 反斜杠 \\

    note:回退符并不能看到
*/
int main() {
    int c;

     while((c= getchar()) != EOF) {
        if (c == '\t') {
            printf("%s", "\\t");
        }else if(c == '\b'){
         printf("%s", "\\b");
        }else if(c == '\\'){
           printf("%s", "\\\\");
        } else {
            putchar(c);
        }
    }
}
