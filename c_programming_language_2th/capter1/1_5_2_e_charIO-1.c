#include <stdio.h>

/* 统计输入的字符数 */

int main() {
	long nc = 0;
	while (getchar() != EOF){
		++nc;
	}
	printf("输入的字符数为：%d\n", nc);
}
