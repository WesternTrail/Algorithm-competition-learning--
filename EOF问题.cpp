#include <stdio.h>
main()
{
    long nc = 0;
    int c;
    while ((c = getchar()) != EOF) {
        printf("int c:%d\n", c);
        ++nc;
    }
    printf("int c:%d\n", c);
    printf("%ld\n", nc);
}
