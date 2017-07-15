#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/* Test program for Matrix Project. */

int main() {

 int rows, cols, get;
 int rowVal, colVal, val;
 matrix_t * myArray;
 matrix_t * myArray2;
 matrix_t * matrixSum;
 matrix_t * matrixTrans; 

printf("********* Welcome to the Matrix Creator! ************* \n\n");
printf("\nEnter the number of rows: ");
scanf("%d", &rows);
printf("\nEnter the number of columns: \n");
scanf("%d", &cols);

/* Initializing arrays. */
printf("  Enter values for myArray: \n\n");
myArray = new_matrix(rows,cols);
printf("  Enter values for myArray2: \n\n");
myArray2 = new_matrix(rows,cols);


/* Printing the matrix */
printf(" Matrix of myArray: \n");
print_matrix(myArray);
printf(" Matrix of myArray2: \n");
print_matrix(myArray2);
printf("\n");

/* Getting a value at a specified location in the matrix. */
printf(" Would you like to find a value in myArray? If 'Yes' enter a 1. If 'No' enter a 0. \n");
scanf("%d", &get);
  if(get == 1) {
    printf("\nEnter the row and column number to get it's value: ");
    scanf("%d %d", &rowVal, &colVal);
    printf(" Value at (%d,%d) of 'myArray': %d\n", rowVal, colVal, get_value(myArray, rowVal, colVal));
  }

 printf(" Would you like to set a value in myArray? If 'Yes' enter a 1. If 'No' enter a 0. \n");
scanf("%d", &get);
  if(get == 1) {
    printf("\nEnter the row, column number and the value you wish to set it to: ");
    scanf("%d %d %d", &rowVal, &colVal, &val);
    set_value(myArray, rowVal, colVal, val);
    printf("New Value at (%d,%d) of 'myArray': %d\n", rowVal, colVal, get_value(myArray, rowVal, colVal));
  }
printf(" Matrix of myArray: \n");
print_matrix(myArray);

/* Adding the two matrices. */
printf("\n The sum of myArray and myArray2 is: \n");
matrixSum = add(myArray, myArray2);
print_matrix(matrixSum);

/* Finding the transpose of a matrix. */
printf("\n The transpose of myArray: \n");
matrixTrans = transpose(myArray);
print_matrix(matrixTrans);

return 0;
}




