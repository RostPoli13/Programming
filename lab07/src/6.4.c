int kal();
 
int main(){


  int words_counter = 0;
  kal( words_counter);
return 0;
}

int kal( words_counter){
const int SENTENCE_LENGTH = 37;
char sentence[] = "dfghjk lkjhgf ertyuio";
  /*Если видим пробел перед которым стоит другой
    символ - oчевидно это новое слово*/
  for (int i = 1; i < SENTENCE_LENGTH; i++) {
    if (sentence[i] == ' ') {
        if (sentence[i-1] != ' ') {
            words_counter++;
        }
    }
  }
  if (sentence[SENTENCE_LENGTH - 1] != ' ') {
  words_counter++;
  }
  return words_counter;
}
