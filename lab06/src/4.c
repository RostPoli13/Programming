#define SENT 28

int main() {
  char sentence[SENT] = "Жили у бабуси два веселых гуся";
  int w_counter = 0;

  for (int i = 1; i < SENT; i++) {
    if (sentence[i] == ' ') {
        if (sentence[i-1] != ' ') {
            w_counter++;
        }
    }
  }
  if (sentence[SENT - 1] != ' ') w_counter++;
  return 0;
}
