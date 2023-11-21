 Environment Setup:

C Compiler:
Ensure you have a C compiler installed on your system. Popular choices include:

GCC (GNU Compiler Collection): Available on Linux distributions. You can install it using package managers like apt-get (for Debian/Ubuntu) or yum (for Fedora).
Clang: Another widely used C compiler available for various operating systems.

Integrated Development Environment (IDE):
You may also choose to use an Integrated Development Environment (IDE) such as Visual Studio Code, Dev-C++, Code::Blocks, or Xcode (for macOS) for a more user-friendly coding experience. 

Dependencies:
The provided code does not have any external dependencies. It uses standard C libraries (stdio.h, stdlib.h, math.h) which are typically included in most C compilers.

Step-by-Step Execution:
Using Command-Line (GCC Example on Linux):
Open a Terminal:

On Linux: Press Ctrl + Alt + T to open a terminal window.
On macOS: Use Spotlight (Cmd + Space), type "Terminal," and hit Enter.
Navigate to the Directory with Your C File:
Use the cd command to navigate to the directory where your C file (program.c) is located.
cd path/to/your/c/file
 
Compile the Code:
Use the GCC compiler to compile the C code (program.c) and generate an executable file (let's say program).
gcc -o program program.c -lm
-o program specifies the output file name.
-lm is used to link the math library.

Execute the Program:
Run the compiled program from the terminal.
./program
This will start the program and display the menu in the terminal.

Interact with the Program:
Follow the on-screen instructions to choose an option (1, 2, 3, or 4) based on whether you want to solve a linear equation, quadratic equation, system of equations, or exit the program.
Enter the required coefficients as prompted and follow the instructions displayed.

Using an IDE:
Open Your IDE:
Launch your preferred IDE (Visual Studio Code, Code::Blocks, etc.).
Create a new C file or open the existing C file containing the provided code.
Compile and Run:
Compile the code using the IDE's build or compile/run options.
Run the compiled program within the IDE's terminal or console interface.
Follow the prompts in the IDE's terminal/console window to interact with the program.

Additional Notes:
Ensure that the code file (program.c or any filename you used) is saved with the .c extension.
Always review any error messages during compilation or execution to address potential issues in your code.
Modify the code or expand functionalities as needed to suit your requirements.


                  
               
