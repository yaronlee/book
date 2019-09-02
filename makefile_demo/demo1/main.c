/*
 仅仅使用 gcc main.c不能成功
	gcc main.c fun1.c fun2.c -o app才可以
	-o 后面跟的是编译后的文件的名字，不然就是a.out
	注意生成app之后 要./app才能运行
 */



#include <stdio.h>
void fun1();
void fun2();

int main() {
	printf("hello world\n");
	fun1();	//函数定义在fun1.c中
	fun2();	//函数定义在fun2.c中
}
