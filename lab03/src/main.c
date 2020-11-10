int main ()
{
// 1

#define R1 5
#define R2 10
#define R3 15

int main_resist;
main_resist = R1*R2*R3/(R1+R2+R3);



// 2

#define NUMBER 458

int sot = ( NUMBER / 10 );
int des = ( NUMBER % 100 ) / 10;
int ed = ( NUMBER % 10 );

int end_num = ed * 100 + des * 10 + sot;



// 3

#define A1 5
int a2 = ( A1 * A1 );
int a4 = ( a2 * a2 );
int a6 = ( a4 * a2 );
int a8 = ( a4 * a4 );
int a10 = ( a8 * a2 );



// 4

#define VALUE1 8426
#define SYSTEM_P 8
int numeral1;
int numeral2;
int numeral3;
int numeral4;
double value_d;
numeral4 = VALUE1 % 10;
numeral3 = ( VALUE1 % 100 ) / 10;
numeral2 = ( VALUE1 % 1000 ) / 100;
numeral1 = VALUE1 / 1000;
value_d = numeral4 + numeral3 * SYSTEM_P + numeral2 * SYSTEM_P * SYSTEM_P + numeral1 * SYSTEM_P * SYSTEM_P * SYSTEM_P;



//5

#define NUMB 123

int first_ch = ( NUMB /100 );
int third_ch = ( NUMB % 100 ) % 10;

float diff = first_ch / (float)third_ch;
diff *= 100;
diff = (int)diff;
diff = (float)diff;
diff /= 100;



// 6

#define NUM1 60
#define NUM2 64

int end_num1 = ( ( NUM1 + NUM2 ) / 2 ) * ( NUM2 - NUM1 + 1 );


return 0;
}
