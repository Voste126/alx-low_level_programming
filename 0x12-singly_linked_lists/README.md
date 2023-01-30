This program deals with linked list concept of the c programming language 
The following are the tasks
0. Print list
mandatory
Write a function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf
1. List length
mandatory
Write a function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);
2. Add node
mandatory
Write a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
3. Add node at the end
mandatory
Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
4. Free list
mandatory
Write a function that frees a list_t list.

Prototype: void free_list(list_t *head);

5.Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

You are allowed to use the printf function
6. Real programmers can write assembly code in any language
#advanced
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

You are only allowed to use the printf function
You are not allowed to use interrupts
Your program will be compiled using nasm and gcc
solution explained :
The code above is an example of x86-64 Assembly language, specifically written for Linux operating systems. The code implements a simple program that prints "Hello, Holberton" followed by a newline to the standard output (terminal).

Here is an explanation of the code:

section .data: This section of the code defines a data section, where variables and messages used in the program are stored. In this case, msg is defined as a null-terminated string "Hello, Holberton".

section .text: This section of the code defines the executable code. The section starts with the _start label, which serves as the entry point of the program.

mov eax, 4: This instruction loads the value 4 into the eax register. In Linux, the value 4 is associated with the write system call, which writes data to a file descriptor.

mov ebx, 1: This instruction loads the value 1 into the ebx register. In Linux, the value 1 is associated with the standard output file descriptor (stdout).

mov ecx, msg: This instruction loads the address of the msg string into the ecx register. The msg string is then passed as an argument to the write system call.

mov edx, 13: This instruction loads the length of the msg string (13 characters) into the edx register. This value is also passed as an argument to the write system call to specify the number of bytes to write.

int 0x80: This instruction triggers an interrupt, which makes the system call specified by the values in eax, ebx, ecx, and edx. In this case, the system call writes the msg string to the standard output.

The code then repeats the same steps to write a newline character to the standard output. The section .rodata defines the newline character as the null-terminated string 10, 0 (where 10 is the ASCII code for a newline).

Finally, the program exits with the exit system call, which is specified by loading the value 1 into eax and 0 into ebx. The value in ebx specifies the exit status of the program.

This is a basic example of how x86-64 Assembly can be used to write a simple program in Linux.
