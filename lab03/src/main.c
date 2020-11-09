int main()
{

		// Задача №1

	#define R1 15 	 // Первое сопротивление
	#define R2 20	 // Второе сопротивление
	#define R3 25	 // Третье сопротивление

	float reverse_r; // Обратное сопротивление
	float resis;  	 // Общее сопротивление

	reverse_r = ( 1 / R1 ) + ( 1 / R2 ) + ( 1 / R3 );
	resis = 1 / reverse_r;

		// Задача №2

	#define NUMBER 313  // Число

	int first_num;  // Единицы
	int doz;	    // Десятки
	int hun; 	    // Сотни
	int reverse_number; // Число в обратном порядке

	first_num = ( NUMBER % 10 );
	doz = ( NUMBER % 100 ) / 10;
	hun = NUMBER / 100;
	reverse_number = first_num * 100 + doz * 10 + hun;

		// Задача №3

	#define N1 3 // Данное число
	int a2;      // Вторая степень
	int a4;      // Четвертая степень
	int a6;      // Шестая степень
	int a8;      // Восьмая степень
	int a10;     // Десятая степень

	a2 = ( N1 * N1 );
	a4 = a2 * a2;
	a6 = a4 * a2;
	a8 = a4 * a4;
	a10 = a8 * a2;

		// Задача №4

	#define NUM 3101 // Данное число
	#define SYS 8 	 // Система счисления

	int num1; 	 // Единицы
	int num2;	 // Десятки
	int num3;	 // Сотни
	int num4;	 // Тысячи

	num1 = ( NUM % 10 );
	num2 = ( NUM % 100 ) / 10;
	num3 = ( NUM % 1000 ) / 100;
	num4 = NUM / 1000;
	int sys10 = num1 + ( num2 * SYS ) + ( num3 * SYS * SYS ) + ( num4 * SYS * SYS * SYS );

		// Задача №5

	#define NUM 379 // Числа

	int first_n = ( NUM / 100 );
	int third_n = ( NUM % 100 ) % 10;

	float diff = first_n / ( float )third_n;

	diff *= 100;
	diff = ( int ) diff;
	diff = ( float ) diff;
	diff /= 100;

		// Задача №6

	#define NUM1 30
	#define NUM2 34

	int dob =  ( NUM1 * NUM2 ) * (( NUM1 + NUM2 ) / 2 ) * ( NUM2 + NUM1 + 1 );
	return 0;
}
