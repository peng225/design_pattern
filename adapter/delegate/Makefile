# Makefile


CFLAGS = -c -g -O3 -Wall -std=c++17 -flto -MMD -MP
FINAL_CFLAGS = -g -O3 -Wall -std=c++17 -flto
LDLIBS = 

TARGET = main

SRC_DIR = ./src
INC_DIR = ./include
OBJ_DIR = ./obj

SRCS = $(shell ls $(SRC_DIR)/*.cpp)
OBJS = $(subst $(SRC_DIR), $(OBJ_DIR), $(SRCS:.cpp=.o))
DEPS = $(OBJS:.o=.d)

INCLUDE = -I $(INC_DIR)

CC = g++

all: $(TARGET)

-include $(DEPS)

$(TARGET): $(OBJS)
	$(CC) $(INCLUDE) -o $@ $^ $(FINAL_CFLAGS) $(LDLIBS)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if [ ! -e $(OBJ_DIR) ] ; then mkdir $(OBJ_DIR) ; fi
	$(CC) $(INCLUDE) -o $@ $< $(CFLAGS) $(LDLIBS)

clean:
	rm -f $(TARGET) $(OBJ_DIR)/* $(SRC_DIR)/*~ $(INC_DIR)/*~ ./*~

.PHONY: all clean
