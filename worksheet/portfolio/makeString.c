/*
Name: Abdimalik Hussein
Student ID: 202028878
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    char buffer[51] = "";

    for (int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);

        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n", buffer);

    return 0;
}
