#Makefile

CC = g++
CFLAGS = -Wall -std=c++11

#Header file
HDR= Template.h

#Sourcess
SRCS = CodeDemo.cpp Template.cpp

#Object files
OBJS = $(SRCS:.cpp=.o)

.PHONY: $(run)

#Target files
TARGET= my_program

all: $(OBJS)

$(OBJS):%.o:%.cpp
	@echo "Executing program for $*"
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

#Run the program
run:$(TARGET)
	@echo ""
	./$(TARGET)
	@echo ""
	$(MAKE) clean

clean:
ifeq ($(OS),Windows_NT)
	del $(OBJS) $(TARGET).exe
else
	rm -f $(OBJS) $(TARGET)
endif
