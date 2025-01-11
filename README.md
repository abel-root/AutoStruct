# Automatic C/C++ Project Structure Generator

This project allows you to automatically generate the basic structure of a C/C++ project, including the necessary directories (`src`, `include`, `lib`, `sources`) and essential files such as `.gitignore`, `README.md`, and `Makefile`.

## Features
- Automatically generates the base directories for a C/C++ project.
- Creates essential files like `.gitignore`, `README.md`, and `Makefile`.
- Allows users to add modules and adapt the project structure based on needs.
- Provides a simple command-line interface to generate the structure effortlessly.

## Prerequisites
Before using this generator, ensure your system meets the following requirements:
- **Operating System:** Linux, macOS, or Windows (via a Bash environment).
- **Bash:** For executing commands.
- **CMake (optional):** To generate additional configuration files if used in your project.

## Installation

### Option 1: Install as a precompiled binary
1. Download the precompiled binary from the [releases](link_to_releases).
2. Make it executable:
   ```bash
   chmod +x dep
3. Move it to a directory in your $PATH (e.g., /usr/local/bin):
    ```bash
    mv dep /usr/local/bin

### Option 2: Install from source
1. Clone the project:
     ```bash
    git clone https://github.com/username/project_name.git
2. Navigate to the project directory:
    ```bash
    cd project_name
3. Build and install the generator:
    ```bash
    make
    sudo make install

## Usage

Once the generator is installed, you can use it to create the structure of your C/C++ project.

1. Command to initialize the project structure
    
    ```bash
    dep init

2. This will create the following directory structure in the current directory:
            App
            ├── src/
            ├── include/
            ├── lib/
            ├── sources/
            ├── .gitignore
            ├── README.md
            ├── log.txt
            └── Makefile

### Command to remove the generated structure:
    
    ```bash
    dep remove

    This will delete the generated directories and files but leave your project intact.

## Testing

To test the automatic generation of the structure, you can run the provided tests.

1. Running unit tests:
     ```bash
     make test
 
  The tests will execute and verify that the directory and file structure is correctly created.

## Contributing

Contributions are welcome! To contribute to this project, please follow these steps:

1. Fork the project.
2. Create a branch for your feature (git checkout -b feature/new-feature).
3. Commit your changes (git commit -am 'Add new feature').
4. Push your changes (git push origin feature/new-feature).
5. Open a Pull Request.

## License

This project is licensed under the MIT License - see the LICENSE file for more details.
