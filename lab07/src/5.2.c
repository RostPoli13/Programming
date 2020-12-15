//Визначити, чи є задане ціле число простим

int kal();

int main(){

const int N = 4;
kal(N);
return 0;
}

int kal(N){

        char result1;
        if (N == 2){
                result1 = 'Y';
        }
        if (N > 1){
                for (int i = 2; i < N; i++){
                        if (N % i == 0){
                                result1 = 'N';
                                break;
                        }
                        else{
                                result1 = 'Y';
                        }
                }
        }

return result1;
}
