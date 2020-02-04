#
# use the following command to build the executable:
#   make all
#
# use the following command to remove all the intermediate build files:
#   make clean
#
# use the following command to remove the build folder
#   make clobber
#

# Output name for the main program
PROGRAM=fibonacci

# Build directory. All intermediate files created while
# building this project are stored in this directory.
BUILD_DIR=./build

# Source files directory.
SOURCE_DIR=

# Source files 
SRCS= \
	fibonacci.c \
	main.c

# C compiler flags.
CFLAGS=-Wall 

# List of C pre-processor variable definitions in gcc command line format.
# e.g. -DNDEBUG=1
CPPDEF= 

# C compiler command lines options.
CFLAGS+= $(XCFLAGS)

# C, cpp-assembler and linker script preprocessor variables
CPPDEF+= $(XCPPDEF)

# Target platform names for the C compiler
CC=gcc

# Make object file names out of the source files names.
SOURCE_TO_OBJECT=$(addprefix $(BUILD_DIR)/,$(patsubst %.c,%.o, $(SRCS)))

#
# Build rules
#

all: $(BUILD_DIR) $(PROGRAM)
	@echo "'$@' complete"

run: all
	./$(PROGRAM)
	
$(BUILD_DIR):
	mkdir -p $@
	@echo "'$@' complete"
	
clean:
	rm -f $(PROGRAM) $(SOURCE_TO_OBJECT)
	@echo "'$@' complete"

clobber: clean
	rm -rf $(BUILD_DIR)
	@echo "'$@' complete"

$(PROGRAM): $(SOURCE_TO_OBJECT)
	$(CC) $(CFLAGS) $(CPPDEF) -o $@ $^

$(BUILD_DIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(CPPDEF) -o $@ $^
	
# vi: set sw=8 ts=8 noet:
