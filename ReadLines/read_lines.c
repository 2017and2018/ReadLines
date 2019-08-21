#include <stdio.h>
#include <stdlib.h>

void read_lines(FILE* fp, char*** lines, int* num_lines) {
    char one_char;
    int char_ind = 0;
    *lines = (char**)malloc(sizeof(char*));
    (*lines)[*num_lines] = (char*)malloc(sizeof(char));
    fscanf(fp, "%c", &one_char);
    while(!feof(fp)){
        (*lines)[*num_lines][char_ind] = one_char;
        if (one_char == '\n'){
            (*lines)[*num_lines] = (char*)realloc((*lines)[*num_lines], (char_ind + 1) * sizeof(char));
            (*lines)[*num_lines][char_ind] = '\0';
            *lines = (char**)realloc(*lines, (*num_lines + 2) * sizeof(char*));
            (*num_lines)++;
            (*lines)[*num_lines] = (char*)malloc(sizeof(char));
            char_ind = 0;
        } else {
            (*lines)[*num_lines] = (char*)realloc((*lines)[*num_lines], (char_ind + 2) * sizeof(char));
            char_ind ++;
        }
        fscanf(fp, "%c", &one_char);
    }

}