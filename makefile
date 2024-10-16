CFLAGS = -g -Wall -Wstrict-prototypes -Wmissing-prototypes -Wshadow -Wconversion
LDLIBS = -lm
executables = hello-git

all : $(executables)


.PHONY: clean
clean:
	rm -fv $(executables) *.map
