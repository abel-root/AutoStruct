# Compilateur et options
CC = gcc 
CFLAGS = -Wall -Wextra -Iinclude -g
LDFLAGS = 

# repertoires sources
SRC_DIR = src
INCLUDE_DIR= include
BUILD_DIR = build
INSTALL_SCRIPT = ./install.sh
# Nom de l'exécutable
TARGET = dep 

# Fichiers source et objets
SRCS = $(wildcard $(SRC_DIR)/*.c)  # on charge la liste des fichiers .c dans le repertoire src 
OBJS= $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS)) 


# Cible principale
all : $(TARGET)

$(TARGET) : $(OBJS)
		$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Compilation des fichiers .c en fichiers .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

install:
	@echo "Installing 'dep' globally..."
	@chmod +x $(INSTALL_SCRIPT)  # Assurez-vous que le script est exécutable
	@$(INSTALL_SCRIPT)

clear : 
	clear 
#Nettoyer
clean : 
	rm -rf $(BUILD_DIR) $(TARGET) 


# Nettoyage complet
distclean: clean

# PHONY pour éviter les conflits avec des fichiers du même nom
.PHONY: all clean distclean