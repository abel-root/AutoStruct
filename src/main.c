/**
 *  main.c , main function 
 *  @author  : Kouakou Abel KONAN
 * @details :  The gols of this app is to create a system which able to generate automatically code structure 
 *         when you want to build a new software. 
 * 
 * how to use this system : 
 *   - install the system 
 *   - create your project folder 
 *   - in your terminal entry ./system which genere all structure for your code 
 * 
 *  target : 
 *      the system is good for the beginner programming in c or c++, the intermediate and advenced  
 *      developper can user and chnage the parametre for him own. 
*/

#include "../include/cgenarate.h"
#include <stdio.h>
#include <string.h>


int main(){
    
    //write_in_file("text.txt","Welcome Kouakou !"); 
    //write_in_file("text.txt","Croix en DIEU stp. "); 
    //write_in_file("text.txt","Jesus t'aime !"); 
    //write_in_file("text.txt","Santifie toi !"); 
    generate_structure_project(); 
    return 0; 
}