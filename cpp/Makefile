BUILD_DIR := ./build
SRC_DIRS := ./src

# Find all the C++ files we want to compile
SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c)

# String substitution for every C/C++ file.
# As an example, hello.cpp turns into ./build/hello.cpp.bin
BINS := $(SRCS:%=$(BUILD_DIR)/%.bin)

# The final build step.
all: $(BINS)
	@echo complete

# Build step for C++ source
$(BUILD_DIR)/%.cpp.bin: %.cpp
	mkdir -p $(dir $@)
	g++ -std=c++0x $< -o $@
	chmod +x $@

.PHONY: clean
clean:
	rm -r $(BUILD_DIR)