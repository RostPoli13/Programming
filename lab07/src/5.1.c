//Визначити найбільший спільний дільник для двох заданих чисел
int kal();

int main(){
    const int num1 = 175;
    const int num2 = 250;
    kal (num1,num2 );
return 0;
}

int kal (num1,num2 ){

    int a = num1;
    int b = num2;
    int result = 0;
    while (a != 0 && b != 0){
        if (a > b) a = a % b;
        else b = b % a;
    }
    result = a + b;
return result;
}
