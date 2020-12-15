void kal();

int main(){

const int SIZE = 3;
       
kal(SIZE);
return 0;
}

void kal(SIZE){
             int matrix[3][3] = {{1, 2, 3},
                            	  {4, 5, 6},
                            	  {7, 8, 8,}};
    	int result_matrix[3][3] = {0};
    	for (int i = 0; i < SIZE; i++){
        	for (int j = 0; j < SIZE; j++){
           		for (int l = 0; l < SIZE; l++) {
                		result_matrix[i][j] += matrix[i][l] * matrix[l][j];
            		}
        	}
    	}
}
