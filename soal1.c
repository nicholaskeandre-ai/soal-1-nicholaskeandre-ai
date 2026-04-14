#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("\n");
        if ((i % 2 == 0) && (i % 3 == 0)) {
            printf("BIRU");
        } else if (i % 3 == 0) {
            printf("MERAH");
        } else if (i % 2 == 0) {
            printf("KUNING");
        } else if ((i >= 10) && (i % 2 == 0)) {
            printf("HIJAU");
        } else {
            printf("%d", i);
        }
    }

    return 0;
}
