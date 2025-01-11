#include "../include/cgenarate.h"
#include <stdlib.h>
#include <stdio.h>

int  create_folder(const char * folderName){
    if(mkdir(folderName, 0755)!=0){
        fprintf(stdout, "It not possible to create the folder name : %s", folderName);
        return -1; 
    }
    else{
        return 0; 
    }

}


int create_file(const char * fileName){
    char command [32]; 
    snprintf(command, sizeof(command), "touch %s",fileName);
    if( system(command)!=0){
            fprintf(stderr, "It is not possible to create the file with the name is : %s",fileName);
            return -1 ; 
    }
    return 0; 
}


void write_in_file(const char * file, const char* data){
    FILE *fp = fopen(file, "a"); 
    if(!fp){
        printf("It is not possible to write in the file"); 
        return ; 
    }

    fprintf(fp,"%s\n",data); // write in file 

    fclose(fp); // close the file

}

void generate_structure_project(){
    //const char *folders[] = {"src", "include", "sources", "lib"};
    //const char *files[] = {".gitignore", "README.md", "Makefile"};

    const char *folders[] = {"aa", "bb"};
    const char *files[] = {"text.txt", "m.md"};

    // Création des dossiers
    for (size_t i = 0; i < sizeof(folders) / sizeof(folders[0]); i++) {
        
        if (create_folder(folders[i]) != 0) {
            fprintf(stderr, "Error during creation of the folder: %s\n", folders[i]);
        }
        
    }

    // Création des fichiers
    for (size_t i = 0; i < sizeof(files) / sizeof(files[0]); i++) {
        
        if (create_file(files[i]) != 0) {
            fprintf(stderr, "Error during creation of the file: %s\n", files[i]);
        }
         
    }
}