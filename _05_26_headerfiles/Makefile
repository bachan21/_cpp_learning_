#Makefile

CC = g++
CFLAGS = -Wall -std=c++11

#Header file
HDR= cow.h

#Sourcess
SRCS = CodeDemo.cpp cow.cpp

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
	$(MAKE) clean
	@echo ""
	./$(TARGET)

clean:
	rm -f $(OBJS)
	rm -f *.exe
