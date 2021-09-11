COMPILER = gcc

#CFLAGS   = # -shared -fPIC
#CFLAGS += -g -p
#CXXFLAGS += -g

CFLAGS += -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE
CFLAGS += -D_LINUX_OS_ -D__linux__
CXXFLAGS += -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE
CXXFLAGS += -D_LINUX_OS_ -D__linux__
CXXFLAGS += -std=c++11

CFLAGS += -O2 -w -Wall
CXXFLAGS += -O2 -w -Wall


#INCLUDE +=  -I$(PROG_DIR_PATH)

LDFLAGS  = -lpthread -ldl -lrt -lm -lstdc++
TARGET   = testprog
SOURCES  = testcplus.cpp
ECHO_BACK := @

all: clean $(TARGET)

$(TARGET): 

	$(ECHO_BACK) $(COMPILER)  $(CXXFLAGS) $(INCLUDE) -o $(TARGET) $(SOURCES) $(LDFLAGS)

clean:
	$(RM) $(TARGET)