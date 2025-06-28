# FILE-HANDLING-PROGRAM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: GAURAV KUMAR

*INTERN ID*: CT04DF963

*DOMAIN*: C PROGRAMMING 

*DURATION*: 4 WEEKS 

*MENTOR*: NEELA SANTOSH

*DESCRIPTION*: File handling is a crucial concept in C programming, especially when developing applications that require data storage, retrieval, and modification. The above C program demonstrates four fundamental file operations — Create and Write, Read, Append, and Exit. Let’s break down each operation and understand what’s happening behind the scenes.

1. Creating and Writing to a File
When the user selects option 1, the program uses the fopen() function with mode "w" to open (or create) a file named "file.txt". If the file already exists, opening it in "w" mode will overwrite all existing contents. If it does not exist, it will be created.

The program then asks the user to enter a line of data using fgets(), which is safer than scanf() as it reads an entire line, including spaces. It writes this data to the file using fputs(). Finally, fclose() is called to close the file and save the changes.

2. Reading from a File
Selecting option 2 allows the user to read contents from the file. Here, fopen() is used with mode "r" (read). If the file does not exist or cannot be opened, an error message is displayed.

If successful, the program uses a while loop along with fgets() to read the file line-by-line and display the contents to the user. This method is efficient for text files and handles line breaks properly. The file is then closed with fclose().

3. Appending Data to the File
When the user selects option 3, the file is opened in append mode "a". This is one of the most useful modes in file handling because it preserves the existing content and allows new content to be added at the end.

Again, the user inputs a line of text using fgets(), and the program writes it using fputs(). The file is closed afterward. Unlike the "w" mode, the "a" mode does not erase existing data, which makes it ideal for maintaining logs or adding data over time.

4. Exit the Program
Option 4 is straightforward. It exits the program using the exit(0) function, which terminates the program successfully.

📂 Technical Concepts Explained
✅ File Pointer (FILE *fp):
A FILE pointer is used to manage and control file operations. It points to the file structure in memory that keeps track of the file's status (read/write mode, position, etc.).

✅ File Modes:
"r": Read mode (file must exist)

"w": Write mode (creates a new file or overwrites existing)

"a": Append mode (adds to the end of file)

✅ File Functions:
fopen(): Opens the file and returns a pointer.

fputs(): Writes a string to the file.

fgets(): Reads a line/string from the file.

fclose(): Closes the file and flushes data to disk.

✅ Error Handling:
Each file operation checks if the file pointer is NULL, indicating that the file could not be opened. This avoids crashes and improves robustness.

🎯 Real-World Use Cases
Writing logs in system monitoring applications.

Saving user input in text files.

Reading configurations from a file.

Appending results in report generation tools.

📌 Conclusion
This program is a great introduction to file handling in C. It demonstrates how to work with text files using basic file operations like creating, writing, reading, and appending. These are foundational skills for any programmer and are especially useful in systems programming, embedded systems, and desktop software development.
