#include <stdio.h>

int main()
{
    FILE *fp;
    int c;

    fp = freopen("resources/file.txt", "r", stdin);

    c = fgetc(fp);
    while (c != EOF)
    {
        putchar(c);
        c = fgetc(fp);
    }

    fclose(fp);

    return 0;
}
