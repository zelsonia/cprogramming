#include <stdio.h>
/*
    输入转化为每行一个单词
    用一个flag的转换，判断当前是在输出单词还是空格（或换行等）
*/

#define IN 1
#define OUT 0

int main() {
    int c, state;
    state = OUT;

     while((c= getchar()) != EOF) {
        if (c == '\t' || c== ' ' || c== '\n') {
            if (state == IN) {
                state = OUT;
                putchar('\n');
            }
        } else {
            if (state == OUT) {
                state = IN;
            }

            putchar(c);
        }
    }
}
