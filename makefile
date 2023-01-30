CC=gcc
IDIR=include
CFLAGS=-I$(IDIR)

SDIR=src
LDIR=lib

_DEPS = help.h loglevels.h args.h
_SRC = main.o help.o loglevels.o args.o

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

$(SDIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pressor: $(SRC)
	$(CC) -o $@ $^ $(CFLAGS)

fast:
	gcc -I./include -o pressor src/*.c

clean:
	rm -f $(SDIR)/*.o pressor