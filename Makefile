 # Nome dell'eseguibile
TARGET = server

# File sorgenti
SRCS = src/server.c src/client.c include/server_utils.c

# File oggetto
OBJS = $(SRCS:.c=.o)

# Directory
INCLUDE_DIR = include
SRC_DIR = src

# Compilatore e flag
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR)

# Regola per compilare l'eseguibile
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Regola per generare i file oggetto
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Pulizia dei file oggetto e dell'eseguibile
clean:
	rm -f $(OBJS) $(TARGET)

# Pulizia completa, incluso il target
fclean: clean

# Compilazione e pulizia completa
re: fclean $(TARGET)