CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g

OBJ = src/main.o src/cpu.o src/memory.o src/uptime.o

sysmon: $(OBJ)
	$(CC) $(CFLAGS) -o sysmon $(OBJ)

clean:
	rm -f $(OBJ) sysmon
