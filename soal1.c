#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    printf("\n");
    for (int i = 1; i <= N; i++) {
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
        printf("\n");
    }

    return 0;
}
