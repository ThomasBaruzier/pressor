CC=gcc
IDIR=include
CFLAGS=-I$(IDIR)

SDIR=src
LDIR=lib

_DEPS = utils.h
_SRC = main.o help.o

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

$(SDIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pressor: $(SRC)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(SDIR)/*.o pressor
