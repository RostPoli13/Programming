#define WORD_LENGTH 15

int main() {
  char filler = '_';
  char word[WORD_LENGTH] = "Ivanov        \0";
  char answer[WORD_LENGTH];
  answer[WORD_LENGTH - 1] = '\0';
  int sp_count = 0;

  //Узнаём кол-во пробелов
  for (int i = 0; i < WORD_LENGTH - 1; i++) {
    if (word[i] == ' ') sp_count++;
    if (word[i] == ' ') sp_count++;
  }

  //Начало строки заполняем наполнителем(filler) половину пробелов
  for (int i = 0; i < sp_count / 2; i++) {
    answer[i] = filler;
  }
  //Далее вставляем слово
  for (int i = 0; i < WORD_LENGTH - sp_count - 1; i++) {
    answer[i + sp_count / 2] = word[i];
  }
  //Остальную часть строки заполняем наполнителем(filler)
  for (int i = WORD_LENGTH - sp_count / 2 - 1; i < WORD_LENGTH - 1; i++) {
    answer[i] = filler;
  }
  return 0;
}
