#include <stdio.h>

/* 统计输入的字符数: 版本2 */

int main() {
	double nc = 0;
	for (; getchar() != EOF; ++nc);
	printf("输入的字符数为：%.0f\n", nc);
}
