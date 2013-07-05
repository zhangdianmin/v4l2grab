# options to compile
OPTIONS = -D_TIME -D_TRAP_FPE -D_GNU_SOURCE

# compiler
CC = arm-none-linux-gnueabi-gcc

# C flags
//CFLAGS = -Wall -march=ARMv5TE -Werror
CFLAGS = -Wall  -Werror -L /home/zhangdianmin/nfsroot/minigui/lib/ -ljpeg -I /home/zhangdianmin/nfsroot/minigui/include/
#CFLAGS = -Wall  -Werror 

# libs
#LIBS = -L /home/zhangdianmin/nfsroot/minigui/lib/ -ljpeg
LL = /home/zhangdianmin/nfsroot/minigui/lib/ -ljpeg 
# include 
#INCLUDE = -I /home/zhangdianmin/nfsroot/minigui/include/
II = /home/zhangdianmin/nfsroot/minigui/include/

# executable name
EXENAME = v4l2grab
# source files
SRCS = $(wildcard *.c)
# object files
OBJS = $(SRCS:%.c=%.o)
# header files
HDRS = $(wildcard *.h)

$(EXENAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(EXENAME) 
	#$(CC) $(OBJS) $(CFLAGS) $(INCLUDE) $(LIBS) -o $(EXENAME) 
	#$(CC) $(OBJS) -I $(II) -L $(LL) $(CFLAGS) -o $(EXENAME) 

$(OBJS): $(HDRS) makefile


.PHONY: clean

clean:
	rm -f *.o *~ *.s *.il *.jpg *.bmp *.yuv

%.o : %.c
	$(CC) $*.c -c $(CFLAGS)

