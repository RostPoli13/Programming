#define SENTENCE_LENGTH 37

int main() {
  char sentence[SENTENCE_LENGTH] = "dfghjk lkjhgf ertyuio";
  int words_counter = 0;
  /*Если видим пробел перед которым стоит другой
    символ - очевидно это новое слово*/
  for (int i = 1; i < SENTENCE_LENGTH; i++) {
    if (sentence[i] == ' ') {
        if (sentence[i-1] != ' ') {
            words_counter++;
        }
    }
  }
  if (sentence[SENTENCE_LENGTH - 1] != ' ') words_counter++;
  return 0;
}
