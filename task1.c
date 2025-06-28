#include <stdio.h>
#include <stdlib.h>

void createFile(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating the file.\n");
        return;
    }
    printf("File '%s' created successfully.\n", filename);
    fclose(file);
}

void writeFile(const char *filename) {
    FILE *file = fopen(filename, "w"); // overwrite mode
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return;
    }
    fprintf(file, "This is the initial content written to the file.\n");
    printf("Data written to '%s' successfully.\n", filename);
    fclose(file);
}

void appendFile(const char *filename) {
    FILE *file = fopen(filename, "a"); // append mode
    if (file == NULL) {
        printf("Error opening the file for appending.\n");
        return;
    }
    fprintf(file, "This line is appended to the file.\n");
    printf("Data appended to '%s' successfully.\n", filename);
    fclose(file);
}

void readFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return;
    }

    char ch;
    printf("\nContents of '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

int main() {
    const char *filename = "sample.txt";

    // Step 1: Create file
    createFile(filename);

    // Step 2: Write data
    writeFile(filename);

    // Step 3: Append more data
    appendFile(filename);

    // Step 4: Read and display the file
    readFile(filename);

    return 0;
}
