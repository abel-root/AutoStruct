/**
 * # Modul cgenerate is created to content all fonction which neccessairy in this project 
 * # liste of these fonctions are : 
 *      - 
*/

#ifndef CGENERATE_H
#define CGENERATE_H
#include <errno.h>
#include <sys/stat.h>
#include <sys/paths.h>

/**
 * function used to create a folder 
 *  exemple of folder : src, include, lib 
 * ---------------------
 * @param  folderName  : its the name of the folder 
 * -------------------------
 * @return 0 or -1 : 
 *  - if 0 is returning then the folder is created 
 *  - if 1 is returning then the folrder is not created 
 */
int  create_folder(const char * folderName);

/**
 * This function is used to create file 
 * @param  fileName -> Its the file name  
 * 
 * @return : 
 *      -> 0 if the file is created 
 *      -> -1 if the file is not created 
*/
int create_file(const char * fileName); 

/**
 * This function is used to read in the file 
 * @param file -> file into you want to write
 * 
 * @return void -> don't return value 
*/
void write_in_file(const char * file, const char * data);

void generate_structure_project();


#endif