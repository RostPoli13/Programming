#define LEN 1300

int main() {
  int num_am = 50;
  int prime_num[LEN];
  int num = 2;
  char simple = 't';
  int i = 0;
  while (i < num_am) {
    if (num > 2 && num % 2 == 0) {
      simple = 'f';
    } else {
      for (int j = 3; j < num / 2; j+= 2) {
        if (num % j == 0) {
          simple = 'f';
        }
      }
    }

    if (simple == 't') {
      prime_num[i] = num;
      i++;
    }

    num++;
    simple = 't';
  }

  return 0;
}
