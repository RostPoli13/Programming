//Визначити чи є задане число досконалим

int kal();

int main(){

    int num3 = 28;
    int sum3 = 0;
    kal(num3,sum3);
return 0;
}

int kal(num3,sum3){

    char result3;
    for (int i = 1; i <= num3 / 2; i++){
        if (num3 % i == 0) sum3 += i;
    }
    if (sum3 == num3) result3 = 'Y';
    else result3 = 'N';
return result3;
}
