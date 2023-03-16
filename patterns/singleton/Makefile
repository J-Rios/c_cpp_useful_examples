
# Specify project name and default compilers
APP_NAME = my_app
CC = gcc
CXX = g++

# Specify build and binary directories
BUILD_DIR = ./build
BIN_DIR = ./bin
#/mnt/c/Users/jose_/Desktop/projects/example_static_singleton/bin/my_app
######################################################################

# Specify sources and headers files
SRCS  = $(shell find ./src -type f -name *.c)
SRCS  += $(shell find ./src -type f -name *.cpp)
HEADS = $(shell find ./src -type f -name *.h)
HEADS += $(shell find ./src -type f -name *.hpp)

# Get objects files from sources and output object
_OBJS = $(SRCS:.cpp=.o)
OBJS = $(_OBJS:.c=.o)

#Setup libs directories to be included
LIBS = -I./src

# Setup compilation flags
CXXFLAGS = -O0 -Wall -g $(LIBS)
# Note: Optimization set to 0 for debug in code order

######################################################################

# Target: make all (build project generating output directory)
all: $(APP_NAME)
	mkdir -p ${BUILD_DIR}
	mkdir -p ${BIN_DIR}
	cp -a $(APP_NAME) $(BIN_DIR)
	mv *.o $(BUILD_DIR)/

# Target: make clean (remove all previously builds)
clean:
	rm -f $(BUILD_DIR)/*.o
	rm -f run

# Target: make cleanall clean previously builds including output bins)
cleanall: clean
	rm -rf $(BIN_DIR)/*

# Target: make rebuild (clean previously builds and build again)
rebuild: clean all

# Target: check (custom target to check build variables)
check:
	@echo "HEADS:"
	@echo "  $(HEADS)"
	@echo "SRCS:"
	@echo "  $(SRCS)"
	@echo "OBJS:"
	@echo "  $(OBJS)"
	@echo "BIN_DIR:"
	@echo "  $(BIN_DIR)"

######################################################################

# Target: make <APP_NAME> (build project)
$(APP_NAME): $(OBJS) $(HEADS)
	$(CXX) $(CXXFLAGS) -o $@ $(SRCS)

# Target for generate object file of each .c file
%.o: %.c
	$(CC) $(CXXFLAGS) -c $<

# Target for generate object file of each .cpp file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<
