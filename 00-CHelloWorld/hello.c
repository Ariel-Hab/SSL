#include <stdio.h>

int main()
{
    const char* filename = "output.txt";
    const char *mode = "w";
    FILE * fp = fopen(filename, mode);
    const char *output = "w";
    fprintf(fp, "Hello World");
    printf("Hello World");
    
    return 0;
}