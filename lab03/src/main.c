int main(){
// Задача №1

#define R1 15 // Сопротивление резистора 1
#define R2 20 // Сопротивление резистора 2
#define R3 25 // Сопротивление резистора 3

float reverse_resistance; // Обратное сопротивление
float resistance;  	  // Общее сопротивление

reverse_resistance = ( 1 / R1 ) + ( 1 / R2 ) + ( 1 / R3 );
resistance = 1 / reverse_resistance '

// Задача №2

#define NUMBER 313 // Трехзначное число

int un;  // Единицы
int doz; // Десятки
int hun; // Сотни
int rev; // Чило в обратном порядке

un = NUMBER % 10;
doz = ( NUMBER % 100 ) / 10;
hun = NUMBER / 100;
rev = un * 100 + doz * 10 + hun;

// Задача №3

#define A1 3 // Число

int n2;  // Число в второй степени
int n4;  // Число в четвёртой степени
int n6;  // Число в шестой степени
int n8;  // Число в восьмой степени
int n10; // Число в десятой степени

n2 = ( A1 * A1 );
n4 = n2 * n2;
n6 = n4 * n2;
n8 = n4 * n4;
n10 = n8 * n2;

// Задача №4

#define SYS 8 	 // Система счисления
#define NUM 3101 // Четырёхзначное число

int a = ( NUM / 1000 );
int b = ( NUM % 1000 ) / 100;
int c = ( NUM % 100 ) /10;
int d = ( NUM % 10 );

int ch = ( SYS * SYS * SYS ) * t + ( SYS * SYS ) * b + ( SYS * c ) + d;

// Задача №5

#define NUM 789 // Число

int first_n = ( NUM / 100 );
int third_n = ( NUM % 100 ) % 10;

float diff = first_n / ( float ) third_n;

diff *= 100;
diff = ( int ) diff;
diff = ( float ) diff;
diff /= 100;

// Задача №6

#define NUM1 30
#define NUM2 34

int comp = (( NUM1 + NUM2 ) / 2) + ( NUM2 + NUM1 );


return 0;
}
