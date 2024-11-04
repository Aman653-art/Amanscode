#include <stdio.h>

void fibonacci_series(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: %d, %d", a, b); // pehle do numbers print kar rahe hain

    for (int i = 2; i < n; i++) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;

    // User se number of terms lena
    printf("Kitne terms chahiye? ");
    scanf("%d", &terms);

    if (terms < 2) {
        printf("Fibonacci series ke liye kam se kam 2 terms hone chahiye.\n");
    } else {
        fibonacci_series(terms);
    }

    return 0;
}