CC=gcc
CFLAGS=-fdiagnostics-show-option -Wno-error=pointer-to-int-cast -Wno-error=int-to-pointer-cast -std=c99 -g
LDFLAGS=-lSDL2
PERKC=perkc

OUT=out

PERKSRC = $(shell find ./ -name "*.perk")
CSRC = $(patsubst %.perk,%.c,$(PERKSRC))
OBJFILES = $(patsubst %.c,%.o,$(CSRC))

build: $(CSRC)
	$(CC) $(CFLAGS) $(OUT)/$(CSRC) -o $(OUT)/super_perkio $(LDFLAGS)

run: build
	$(OUT)/super_perkio

%.c: %.perk
	mkdir -p $(OUT)/$(shell dirname $<)
	$(PERKC) $<
	mv $(subst .perk,.c,$<) $(OUT)/$(subst .perk,.c,$<)
	mv $(subst .perk,.ast,$<) $(OUT)/$(subst .perk,.ast,$<)
