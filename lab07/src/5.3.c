int kal();

int main(){

    int n = 228912;
    int res1 = 0;
    int res2 = 0;

    kal (n, res1, res2);

return 0;
}

int  kal (n, res1, res2){

char res;

    while (n / 1000) {
        res1 += n % 10;
        n = n / 10;
    }
    while (n % 1000) {
        res2 += n % 10;
        n = n / 10;
    }
    if (res1 == res2) {
        res = 'Y';
    } else {
        res = 'N';
    }

return res;
} 
