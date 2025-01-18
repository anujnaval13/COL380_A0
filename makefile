# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -O3 -Wall -Wextra -pedantic

# Source files
SRCS = main.cpp utils.cpp matrix_operations.cpp
# Object files
OBJS = $(SRCS:.cpp=.o)
# Output executable
TARGET = main

# Default rule
all: $(TARGET)

# Rule to build the target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)

# Run rule for convenience
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
