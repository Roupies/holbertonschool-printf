_PRINTF

A simplified reimplementation of the printf function in C.

## Table des matières 

1. [Introduction]
2. [Installation]
3. [Requirement]
3. [Usage]
4. [Man Page]
5. [Testing]
6. [Valgrind]
7. [Flowchart]
8. [Authors]
9. [License]

# **[Introduction]** 

This project is a reimplementation of the standard printf function in C.
It allows displaying formatted string on the screen using various format specifiers (%c, %s, %d, etc).


## **[Installation]**

How to clone : 

Step 1: Clone a repository, Git creates a local copy of it

git clone https://github.com/Roupies/holbertonschool-printf.git

Step 2: Set the push.autoSetupRemote option

After cloning the repository, I can set this option to simplif future git push commands when creating new branches.

git config --global push.autoSetupRemote true

Step 3: Create a branch and push it 

Create a new branch and push it for the first time, Git will automatically link that branch to the corresponding remote branch without requiring you to use --set-upstream.

git checkout -b my-new-branch (Olivia)
git push

How to compile :

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

### **[Requirement]**

Ubuntu 20.x (the environment used for development)

GCC (GNU Compiler Collection) for compiling the C code

Git for version control and collaboration


#### **[Usage]**

Once the project is compiled, you can run the program by using the following command in the terminal:

Step 1. Running the program:

./my_printf

Step 2. Basic Example:

Example 1: Print a Character

_printf("Character:[%c]\n", 'H')
Output: Character:[H]

Example 2: Print a String

_printf("String:[%s]\n", "I am a string !")
output: String: I am a string !

Example 3: Print an Integer

_printf("Length:[%d, %i]\n", len, len)
output: Length: 39, 39

Example 4: Print the Percent Symbol

_printf("Percent: %%\n");
output: Percent: %

Step 3. Format specifiers supported:

The following format specifiers are implemented in this project:
- %c: Prints a character.
- %s: Prints a string.
- %d: Prints an integer (signed).
- %i: Prints an integer (signed).
- %%: Prints the percent symbole %.


#### **[Man Page]**

A manual page for the _printf function has been included. To view the manual, use the following command:

man ./printf.3

This will display the man page that describes the usage, syntax, and functionality of the _printf function.

##### **[Testing]**

To test the program, you can run it with different formats and compare its output to the standard printf to ansure accuracy. Here's an example: 

Step 1: Run your program with specific format string and check the output:
./my_printf "Test string: %s\n" "Hello"

Step 2: Compare the result with the output from the standard printf:
printf "Test string: %s\n" "Hello"

###### **[Valgrind]**

In this project, we did not use dynamic memory allocation (malloc, free), so there was little risk of memory leaks.

####### **[Flowchart]**

![Flowchart_fonction_printf](images/Flowchart_fonction_printf.jpg)
 
######## **[Authors]**

- Maxime : https://github.com/Roupies/holbertonschool-printf.git
- Olivia Letchy : https://github.com/Roupies/holbertonschool-printf.git
- Williams Hillaire : https://github.com/Roupies/holbertonschool-printf.git

######### **[License]**

This project is licensed under the MIT License - see the LICENSE file for details.

Feel free to copy and paste this into your `README.md` file and make any adjustments you need.
