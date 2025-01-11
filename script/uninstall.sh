#!/bin/bash

DESTINATION="/usr/local/bin/dep"

echo "Uninstalling dep..."

if [ -f "$DESTINATION" ]; then
    sudo rm "$DESTINATION"
    echo "dep uninstalled successfully."
else
    echo "dep is not installed."
fi
