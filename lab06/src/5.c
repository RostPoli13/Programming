#define N 4
int main()
{
int main[N][N] = {{1, 2, 3, 4},
		  {5, 6, 7, 8},
		  {9, 10, 11, 12},
		  {13, 14, 15, 16}};

    	int array[N][N] = {{1, 2, 3, 4},
                   	   {5, 6, 7, 8},
                   	   {9, 10, 11, 12},
                   	   {13, 14, 15, 16}};
    	int reserve = array[0][0];
    	for (int i = 0; i < N * N; i++) {
	array[0][i] = array[0][i + 1];
    	}
	array[3][3] = reserve;
	/*int reserve = array[0][0];
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			array[0][i] = array[0][i + 1];
			array[3][3] = reserve;
		}
	}
    	/*return 0;*/

    //зберігаємо в резерв першого елемента останньої строки
    int resmain[N][1];

    for (int i = 0; i < N; i++) {
        resmain[i][0] = main[i][0];
    }


    //Зсуваємо
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            main[j][i] = main[j][i + 1];
        }

    }
    //заносимо назад до резерву
    for (int i = 0; i < N; i++) {
        main[i][N - 1] = resmain[i][0];
    }

return 0;
}
