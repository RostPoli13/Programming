#define N 5
int main()
{
int main[N][N] = {{1, 2, 3, 4, 5},
		  {6, 7, 8, 9, 10},
		  {11, 12, 13, 14, 15},
		  {16, 17, 18, 19, 20}
          {21, 22, 23, 24, 25}};

    	int array[N][N] = {{1, 2, 3, 4, 5},
		        {6, 7, 8, 9, 10},
		        {11, 12, 13, 14, 15},
		        {16, 17, 18, 19, 20}
                {21, 22, 23, 24, 25}};
    	int reserve = array[0][0];
    	for (int i = 0; i < N * N; i++) {
	array[0][i] = array[0][i + 1];
    	}
	array[3][3] = reserve;
	
    int resmain[N][1];

    for (int i = 0; i < N; i++) {
        resmain[i][0] = main[i][0];
    }


    //Сдвиг
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            main[j][i] = main[j][i + 1];
        }

    }
    //Обратно в резерв
    for (int i = 0; i < N; i++) {
        main[i][N - 1] = resmain[i][0];
    }

return 0;
}
