CC=arm-none-eabi-gcc
OBJCOPY=arm-none-eabi-objcopy
CFLAGS=-Wall -fno-diagnostics-color -c
ARCH=-mthumb -mthumb-interwork
SPECS=-specs=gba.specs
O=o
BIN=$(HOME)/bin

TARG=adventure
OFILES=\
	main.$O\

HFILES=\
	dat.h\
	regs.h\

.PHONY: all install uninstall clean
all: $(TARG)

%.$O: %.c
	$(CC) $(ARCH) $(CFLAGS) $<

$(OFILES): $(HFILES)

$(TARG): $(OFILES)
	$(CC) $(SPECS) $(ARCH) -o $@ $< $(LIBS) $(LDFLAGS)
	$(OBJCOPY) -O binary $@ $@.gba
	gbafix $@.gba

install: $(TARG)
	cp $(TARG) $(BIN)/

uninstall:
	rm -f $(BIN)/$(TARG)

clean:
	rm $(OFILES) $(TARG) *.gba
