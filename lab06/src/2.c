#define ARRAY_LENGTH 1000

int main() {
  int numbers_amount = 50;
  int prime_numbers[ARRAY_LENGTH];
  int number = 2;
  char is_simple = 't';
  int i = 0;
  while (i < numbers_amount) {
    /* Эта "функция" устанавливает значение is_simple в 'f' если число не является простым */
    if (number > 2 && number % 2 == 0) {
      is_simple = 'f';
    } else {
      for (int j = 3; j < number / 2; j+= 2) {
        if (number % j == 0) {
          is_simple = 'f';
        }
      }
    }

    /* Если число простое - дбавляем его в массив*/
    if (is_simple == 't') {
      prime_numbers[i] = number;
      i++;
    }

    number++;
    is_simple = 't';
  }

  for (int i = 0; i < numbers_amount; i++) {
    printf("%d ", prime_numbers[i]);
  }
  return 0;
}
