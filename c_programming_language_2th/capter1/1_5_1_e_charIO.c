#include <stdio.h>

/* 将输入复制到输出  */

int main(){
	int c;

	while((c = getchar()) != EOF)
	  putchar(c);

	return 0;
}
