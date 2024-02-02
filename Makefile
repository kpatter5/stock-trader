CC = g++
CFLAGS = -g -Wall
OBJS = User.o Market.o
SRCS = User.cpp User.h Market.cpp Market.h

trade: $(OBJS)
	$(CC) $(CFLAGS) -o trade $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)