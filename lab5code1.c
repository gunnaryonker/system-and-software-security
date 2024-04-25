#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    const int size = 3;
    char buffer[size];
    char *input;

    // Initialize buffer with zeros
    memset(buffer, 0, sizeof(buffer));

    while(1) {  
        printf("size of buffer is: %d, content is:%s\n",strlen(buffer),buffer);
        
        input = malloc(size);  
        if (input == NULL) {
            perror("Failed to allocate memory");
            return 1;
        }

        printf("Type a sentence with length %d:", size-1);
        scanf("%2s", input);
	while ((getchar()) != '\n');

        strncpy(buffer, input, size-1);  
	buffer[size-1] = '\0';  
        printf("\n Content: %s, size:%d\n",buffer, strlen(buffer));
        
        free(input);
    }
    return 0;
}