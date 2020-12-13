#define WORD_LENGTH 15

int main() {
  char filler = '_';
  char word[WORD_LENGTH] = "Ivanov        \0";
  char answer[WORD_LENGTH];
  answer[WORD_LENGTH - 1] = '\0';
  int spaces_counter = 0;

  /*Здесь узнаём кол-во пробелов*/
  for (int i = 0; i < WORD_LENGTH - 1; i++) {
    if (word[i] == ' ') spaces_counter++;
  }

  /*В начале строки заполняем филлером ровно половину пробелов*/
  for (int i = 0; i < spaces_counter / 2; i++) {
    answer[i] = filler;
  }
  /*Далее вставляем слово*/
  for (int i = 0; i < WORD_LENGTH - spaces_counter - 1; i++) {
    answer[i + spaces_counter / 2] = word[i];
  }
  /*Остаток строки заполняем филлером*/
  for (int i = WORD_LENGTH - spaces_counter / 2 - 1; i < WORD_LENGTH - 1; i++) {
    answer[i] = filler;
  }
  return 0;
}
