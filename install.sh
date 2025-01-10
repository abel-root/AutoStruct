#!/bin/bash

# Nom de l'exécutable
EXECUTABLE="dep"
DESTINATION="/usr/local/bin/dep"

echo "Installing $EXECUTABLE globally..."

# Vérifier si l'exécutable existe
if [ ! -f "build/$EXECUTABLE" ]; then
    echo "Error: '$EXECUTABLE' not found in 'build/'. Please run 'make' first."
    exit 1
fi

# Copier l'exécutable dans /usr/local/bin
sudo cp "build/$EXECUTABLE" "$DESTINATION"

# Donner les permissions d'exécution
sudo chmod +x "$DESTINATION"

echo "Installation complete! You can now use 'dep init' to generate a project structure."
