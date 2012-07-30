ASM = nasm
LD = ld
CC = gcc

# Folders

# OS Modules
BOOT=boot
MEMORY=memory
STRING=string
MAIN=main
IO=io

OUT=out
BUILD=build

INCLUDES = -I $(BOOT) -I $(MEMORY) -I $(STRING) -I $(MAIN) -I $(IO)
CFLAGS = -g -Wall -O -c -fstrength-reduce -fomit-frame-pointer -finline-functions -nostdinc -fno-builtin

KERNEL_DEPS = $(foreach src, $(shell "find . -name \"*.c\""), src)

# Output
KERNEL = $(OUT)/kernel.bin

kernel: $(KERNEL)

$(KERNEL): $(BUILD)/start.o $(KERNEL_DEPS)
	$(LD) -T $(BOOT)/link.ld -o $@ $^

$(BUILD)/start.o:
	$(ASM) -f aout -o $@ $(BOOT)/start.asm

$(BUILD)/$(BOOT)/%.o: $(BOOT)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) $@ $^

$(BUILD)/$(MAIN)/%.o: $(MAIN)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) $@ $^

$(BUILD)/$(MEMORY)/%.o: $(MEMORY)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) $@ $^

$(BUILD)/$(IO)/%.o: $(IO)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) $@ $^

$(BUILD)/$(STRING)/%.o: $(STRING)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) $@ $^
