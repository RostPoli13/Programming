//Визначити корінь заданого числа

int kal();

int main(){
const int VALUE = 225;
kal(VALUE);
return 0;
}

int kal(VALUE){
double v = VALUE;
double a1 = 0.0000000001;
double root = v / 2;
for (; root - v / root > a1 ;)
{
    root = 0.5 * ( root + v / root );
}

return root;
}
