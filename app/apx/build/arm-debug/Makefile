#  CONTENT
#    
#
#  AUTHOR
#    Norbert
#
#  DATE
#    2017-01-08
#
#  LANGUAGE
#    make
#
LIB =		../../../../lib
BLIB =		../../../../blib

CFLAGS +=	-Wall
CFLAGS +=	-I$(BLIB)/priva/include -I$(LIB)/foo/include

# help
help:
	@echo "'make run'" to build and run apx

# clean
clean:
	rm -f *.o *.a *.elf

# build the app
VPATH += 	../../src
apx.elf:	main.o \
		$(LIB)/foo/build/arm-debug/libfoo.a  \
		$(BLIB)/priva/build/arm-debug/libpriva.a
	g++ -o $@ $^ 

run: apx.elf
	./$<

# recursively build libs
%.a:
	make -C $(dir $@) $(notdir $@)
