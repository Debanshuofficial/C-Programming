#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World!");
    return 0;
}
//process of compilation.
// pre-processing || .i file created || include file data copy and pasted, comments removed. 
// Compilation || data of .i file converted into assembly level language || stored in .s file.
// assembly || assembly level language converts into machine level language || stored in .o file.
// linking || .o file content combined and zipped || and .exe file created.