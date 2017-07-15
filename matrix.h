	/* Header file for matrix.c. */

    typedef struct matrix_t {
    int nrow;
    int ncol;
    int **mat;
  } matrix_t;
  
/* Create a new matrix */
matrix_t * new_matrix(int, int);

/*Create a blank matrix */
matrix_t * blank_matrix(int, int);
/*Neatly print the matrix */
void print_matrix(const matrix_t * mat);

/* Get/Set the value at row, col */
int get_value(const matrix_t * , int, int);
void set_value (matrix_t * , int, int, int);

/* Return the sum of two matrices */
matrix_t * add(const matrix_t * , const matrix_t * );

/* Return the transpose of a matrix */
matrix_t * transpose(const matrix_t * );
