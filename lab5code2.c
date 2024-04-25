#include<stdio.h>
#include<string.h>

int main()

{

    const int size = 3;

    char buffer[size];

    memset(buffer, 0, size); // Initialize buffer

    printf("Type a sentence: ");

    fgets(buffer, size, stdin);  // Match buffer size

    printf("size of buffer is: %d\n", (int)strlen(buffer));

    printf("%s", buffer);

    return 0;

}

