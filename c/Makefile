#
#
#
test1 : test1.o parse.o
	$(CC) -Wall $^ -o $@

%.o : %.c
	$(CC) -Wall -c $^
