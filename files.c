#include "files.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
*/
FILE * file_new(char *name, char *mode){
  FILE *fp;
  fp=fopen(name,"a");

  return fp;
}

/**
 * Writes a bidimensional buffer array into a file.
 * @param
 *  file (FILE *):
 *      Storage file
 *  columns (size_t ):
 *      length of the buffer array
 *  buff [ ][columns] (long double):
 *      RAM matrix
 *  rows (size_t):
 *      width of the storage buffer
 *
 * @return void.
*/

void file_num_write(FILE * file, size_t columns, long double buff[] [columns], size_t rows){

}
