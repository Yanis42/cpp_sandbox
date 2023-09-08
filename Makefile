CXX := g++
CXXFLAGS := -Wall -Wextra
INC := -Isrc

DEBUG := 0

ifneq ($(DEBUG),0)
	OPTFLAGS := -O0
	CXXFLAGS += -g3 -D_DEBUG
else
	OPTFLAGS := -O3
endif

SRC_DIRS := src
CPP_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cpp))
H_FILES := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.h))
O_FILES := $(foreach f,$(CPP_FILES:.cpp=.o),build/$f)

OUTPUT := program.out

# create build directory
$(shell mkdir -p $(foreach dir,$(SRC_DIRS),build/$(dir)))

# main targets
all: $(OUTPUT)

clean:
	rm -rf build $(OUTPUT)

.PHONY: all clean

build/src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(OPTFLAGS) $(INC) -c $(OUTPUT_OPTION) $<

$(OUTPUT): $(O_FILES)
	$(CXX) $(CXXFLAGS) $(O_FILES) $(OUTPUT_OPTION)
