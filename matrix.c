#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* matrix.c file that contains functions used to create, print, and perform matrix operations. */


/* Function that allocates memory for a matrix structure. */
matrix_t * new_matrix(int row, int col) {
    int i, ii, jj, value;
    matrix_t * myMatrix = malloc(sizeof(matrix_t));
    
    myMatrix->mat = (int **) malloc(sizeof(int *) * row);
    for(i=0; i < row; i++) {
      myMatrix->mat[i] = (int*)malloc(sizeof(int) * col);
    }

/* This prompts for user defined value at each row and column number. */
    for(ii=0; ii< row; ii++) {
      for(jj=0; jj < col; jj++)  {
	printf("(%d,%d): ", ii+1, jj+1);
	scanf("%d", &value);
	myMatrix->mat[ii][jj]= value;
      }
    }
  printf("\n");

    myMatrix->ncol = col;
    myMatrix->nrow = row;
  return myMatrix;
}


/* This function creates a blank matrix with all values being zero. */
matrix_t * blank_matrix(int row, int col) {
    int i;
    matrix_t * blankMatrix = malloc(sizeof(matrix_t));
    
    blankMatrix->mat = (int **) malloc(sizeof(int *) * row);
    for(i=0; i < row; i++) {
      blankMatrix->mat[i] = (int*)malloc(sizeof(int) * col);
    }

    blankMatrix->ncol = col;
    blankMatrix->nrow = row;
  return blankMatrix;
}

/* Function that neatly prints the matrix */
void print_matrix (const matrix_t * matrix) {
  int i,j;


  for(i = 0; i<(matrix->nrow); i++) {
    for(j = 0; j<(matrix->ncol); j++) {
	printf("%d ", matrix->mat[i][j]);
    }
   printf("\n");
  }
}

/* Function that gets the value of a specified coordinate in the matrix. */
int get_value(const matrix_t * matrix, int row, int col) {
  int value;
  value = matrix->mat[row -1][col -1];

return value;
}

/* Function that sets a specified coordinate in the matrix to a new value. */
void set_value(matrix_t * matrix, int row, int col, int value) {
  matrix->mat[row -1][col -1] = value;

}


/* Function for finding the sum of two matrices. Stores the sum into a new matrix, and returns it. */
matrix_t * add(const matrix_t * m1, const matrix_t * m2) {
    int i, ii, j;

    matrix_t * sumMatrix = malloc(sizeof(matrix_t));
    
    sumMatrix->mat = (int **) malloc(sizeof(int *) * m1->nrow);
    for(ii=0; ii < m1->nrow; ii++) {
      sumMatrix->mat[ii] = (int*)malloc(sizeof(int) * m1->ncol);
    }

    sumMatrix->nrow = m1->nrow;
    sumMatrix->ncol = m1->ncol;

/*The for loop that adds the two matrices and stores it to the sumMatrix. */
  for(i = 0; i<(m1->nrow); i++) {
    for(j = 0; j<(m1->ncol); j++) {
	sumMatrix->mat[i][j] = (m1->mat[i][j] + m2->mat[i][j]);
    }
  }
 return sumMatrix;
}

/* Function that returns the transpose of a given martix. */
matrix_t * transpose(const matrix_t * matrix) {
    int i, ii, j;

    matrix_t * transMatrix = malloc(sizeof(matrix_t));
    transMatrix->mat = (int **) malloc(sizeof(int *) * matrix->nrow);

/* 'If' method to allocate row and col memory on transMatrix for proper transposal. */
    if((matrix->ncol) > (matrix->nrow)) {
       for(ii=0; ii < matrix->ncol; ii++) {
         transMatrix->mat[ii] = (int*)malloc(sizeof(int) * matrix->ncol);
       } 
    }

    else {
       for(ii=0; ii < matrix->nrow; ii++) {
         transMatrix->mat[ii] = (int*)malloc(sizeof(int) * matrix->ncol);   
       }
    }
 transMatrix->nrow = matrix->ncol;
 transMatrix->ncol = matrix->nrow;
    
/* Transposes the values in row and col */
    for(i = 0; i<(transMatrix->nrow); i++) {
      for(j = 0; j<(transMatrix->ncol); j++) {
	transMatrix->mat[i][j] = matrix->mat[j][i];
    }
  }

return transMatrix;
}













