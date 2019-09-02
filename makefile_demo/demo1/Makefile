#(1)patsubst: 替换通配符，按指定规则做替换
#(2)wildcard：扩展通配符，搜索指定文件。

#这是第四版Makefile


src = $(wildcard ./*.c)
obj = $(patsubst %.c, %.o, $(src))
#obj = $(src:%.c = %.o)
target = app
CC = gcc

$(target): $(obj)
	$(CC) $(obj) -o $(target)


%.o: %.c
	$(CC) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(obj) $(target)
