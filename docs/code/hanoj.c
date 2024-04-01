// Stapovi su oznaceni sa 1, 2 i 3. Unosi se broj diskova n.
// Ispisuju se pomeraji kroz prostor operatora.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoj(unsigned n, unsigned sa, unsigned pom, unsigned na) {
    if (n > 0) {
        hanoj(n - 1, sa, na, pom);
        printf("sa stapa %u premesti na stap %u\n", sa, na);
        hanoj(n - 1, pom, sa, na);
    }
}

int main(void)
{
    unsigned n;
    scanf("%u", &n);
    hanoj(n, 1, 2, 3);
    return 0;
}