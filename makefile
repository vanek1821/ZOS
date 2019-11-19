CC = gcc
BIN = filesystem.exe
OBJ = boot_record.o Commands.o existingItem.o Functions.o main.o mft_fragment.o mft_item.o MFT.o VFS.o

all: $(BIN) clean

$(BIN): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $< -o $@
  
clean:	
	rm -f *.o