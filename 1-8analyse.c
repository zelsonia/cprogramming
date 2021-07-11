#include <stdio.h>
/*
1-8
统计空格 换行 的数量
*/
int main() {
    int c, space_count, newline_count;
    space_count = 0;
    newline_count = 0;

    while((c= getchar()) != EOF) {
        if (c == '\n') {
            newline_count++;
        } else if(c == ' ') {
            space_count++;
        }
    }
    printf("line %d space %d", newline_count, space_count);
}
