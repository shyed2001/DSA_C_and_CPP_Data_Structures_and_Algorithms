
/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include<ctype.h>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])

{ ///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");
   clock_t tStart = clock();






   clock_t tStart2 = clock();






    printf("Time taken: %.5fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);


    printf("Total Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    cin.get()/// all system /// C++ all system // platform

    return 0;
    /// return EXIT_SUCCESS;
    system("pause>null"); /// for windows only  /// For debugging only.

}
    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused until you press any key.
    ///printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n

/*
You can use the OS commands to clear the contents of the console.

#include<stdlib.h>
int main(){

system("cls");   //For windows
system("clear"); //For Linux

}

This is actually a quite simple problem. All you have to do is use printf. You don't even need printf or any headers, for that matter.

printf("\e[1;1H\e[2J");
The \e[1;1H sets the screen to the 1st row and 1st column. the 2J overwrites all characters currently on the screen.

You can also use this:

write(0,"\e[1;1H\e[2J",12);
Then you don't need stdio.h.


*/

/*
system("pause");
is wrong because it's part of Windows API and so it won't work in other
operation systems.

You should try to use just objects from C++ standard library.
A better solution will be to write:

cin.get(); ///  cin.get();  // or getchar()
return 0;
But it will also cause problems if you have other cins in your code.
 Because after each cin, you'll tap an Enter or \n which is a white space character. cin ignores this character and leaves it in the buffer zone but cin.get(), gets this remained character. So the control of the program reaches the line return 0 and the console gets closed before letting you see the results.
To solve this, we write the code as follows:
cin.ignore();
cin.get();
return 0;

You can use std::cin.get() from iostream:

#include <iostream> // std::cout, std::cin
using namespace std;

int main() {
   do {
     cout << '\n' << "Press the Enter key to continue.";
   } while (cin.get() != '\n');

   return 0;
}

 cin.get();  // or getchar()

Similarly, in C language, getchar() can be used to pause
 the program without printing the message “Press any key to continue…”.

/// return EXIT_SUCCESS;
Required header
#include <stdlib.h>
These are arguments for the exit and _exit functions, and the return values for the atexit and _onexit functions.

Constant	Defined value
EXIT_SUCCESS	0
EXIT_FAILURE	1
 EXIT_FAILURE makes code more portable
 EXIT_FAILURE, either in a return statement in main or as an argument to exit(),
 is the only portable way to indicate failure in a C or C++ program. exit(1) can
 actually signal successful termination on VMS, for example.

If you're going to be using EXIT_FAILURE when your program fails, then you might as
well use EXIT_SUCCESS when it succeeds, just for the sake of symmetry.

On the other hand, if the program never signals failure, you can use either 0 or EXIT_SUCCESS.
Both are guaranteed by the standard to signal successful completion. (It's barely possible that EXIT_SUCCESS could
have a value other than 0, but it's equal to 0 on every implementation I've ever heard of.)

Using 0 has the minor advantage that you don't need #include <stdlib.h> in C,
 or #include <cstdlib> in C++ (if you're using a return statement rather than
calling exit()) -- but for a program of any significant size you're going to be
including stdlib directly or indirectly anyway.

For that matter, in C starting with the 1999 standard, and in all versions of C++,
 reaching the end of main() does an implicit return 0; anyway, so you might not need to
 use either 0 or EXIT_SUCCESS explicitly. (But at least in C, I consider an explicit return 0; to be better style.)

(Somebody asked about OpenVMS. I haven't used it in a long time, but as I
 recall odd status values generally denote success while even values denote failure.
 The C implementation maps 0 to 1, so that return 0; indicates successful termination.
 Other values are passed unchanged, so return 1; also indicates successful termination.
 EXIT_FAILURE would have a non-zero even value.)
From the C++ & C specification, the value of zero or EXIT_SUCCESS is proposed to tell the host environment
(like a bash etc.) that the program successfully terminated,
 and EXIT_FAILURE is proposed to tell the host environment that the program unsuccessfully terminated,
 you can also set the return value or exit status to other integer values.

Thus, if you wanna to tell the host environment that your program runs okay, please return EXIT_SUCCESS,
or return EXIT_FAILURE to tell the host environment that the program fails to run, and return other values
for program specific status.
    Theoretically, the exit() function in C++ causes the respective program to terminate as soon as the function is encountered,
    no matter where it appears in the program listing.
     The function has been defined under the stdlib.h header file, which must be included while using the exit() function.
The syntax is exit(0);	The syntax is exit(1);
The usage of exit(0) is fully portable.	The usage of exit(1) is not portable.
The purpose of the exit() function is to terminate the execution of a program.
 The “return 0”(or EXIT_SUCCESS) implies that the code has executed successfully without any error.
 Exit codes other than “0”(or EXIT_FAILURE) indicate the presence of an error in the code.
 Among all the exit codes, the codes 1, 2, 126 – 165 and 255 have special meanings and hence these should be avoided
 for user-defined exit codes.
Syntax exit() is not good, the program does not compiles or shut down properly and may cause memory errors.
*/
/*
fflush(stdin) − It is used to clear the input buffer memory. It is recommended to use before writing scanf statement.

fflush(stdout) − It is used for clearing the output buffer memory. It is recommended to use before printf statement.
The following should work:

cin.flush();
On some systems it's not available and then you can use:

cin.ignore(INT_MAX);
*/
