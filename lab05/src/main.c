#define NUM 5
#define VAL 245
int main(){

	// Task 1

	const int n1 = 114;
	const int n2 = 222;
	int a = n1;
	int b = n2;
	int result = 0;
	while (a != 0 && b != 0){
		if (a > b) a = a % b;
		else b = b % a;
	}
	result = a + b;

	// Task 2 
	
	char result1;
	if (NUM == 2){
		result1 = 'Y';
	}
	if (NUM > 1){
		for (int i = 2 ; i < NUM; i++){
			if (NUM % i == 0){
				result1 = 'N';
				break;
			} 
			else {
				result1 = 'Y';
			}
		}
}
	// Tack 3

	int n = 102300;
	int ch1 = 0;
	int ch2 = 0 ;
	char ch ;

	while (n / 1000) {
		ch1 += n % 10;
		n = n / 10;
	}

	while (n % 100){
	ch2 += n % 10;
	n = n / 10;
	}

	if (ch1 == ch2){
		ch = 'Y';
	}
	else {
		ch = 'N';
	}
	// Task 4

	int n1 = 48;
	int s = 0 ;
	char result4 ;

	for (int i = 1; i<= num3 /2; i++){
		if (n1 % i == 0) s += i;
	}
	if (s == n1) result4 = 'Y';
	else result4 = 'N';

	// Task 5

	double v = VAL;
	double a5 = 0.0000000001;
	double r = v / 2;

	while (r - v / r > a5){
		r = 0.5 * (r + v / r);
	}
return 0 ;
}
