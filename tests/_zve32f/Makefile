# Define the RISC-V toolchain prefix
RISCV_PREFIX = riscv64-unknown-elf-

# Define the compiler
CC = $(RISCV_PREFIX)gcc

# Define the compiler flags
CFLAGS = -march=rv64gc_zve32f -mabi=lp64d

# Define the source files
SRCS = main.c

# Define the executable file
EXEC = main

# Define the build rules
all: $(EXEC)

$(EXEC): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

# Define the clean rule
clean:
	rm -f $(EXEC)
