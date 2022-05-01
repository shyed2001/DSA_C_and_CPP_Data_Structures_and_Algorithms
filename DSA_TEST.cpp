/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#include <time.h>
#include <unistd.h>
//#include <windows.h>
///#include <threads.h>
//#include <conio.h>
//#include <dos.h>
//#include <direct.h>
//#include <math.h>
//#include<ctype.h>
//#include <cstdlib>
#include <iostream>
//#include <cmath>
//#include <string>
//#include <iomanip>

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
#define SHOW_SOURCE_CODE
#define SHOW_SOURCE_FILE_PATH

using namespace std;

int main(int argc, char* argv[])

{ ///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");

clock_t tStart = clock();













   float putsTime1 = ((double)(clock() - tStart))/CLOCKS_PER_SEC;
   printf(" \n Time taken: %.5f s\n", putsTime1);





#ifdef SHOW_SOURCE_CODE
        // We can append this code to any C program
    // such that it prints its source code with line number.

unsigned long ln = 0;
 FILE *fp = fopen(__FILE__, "r");
int prev = '\n';
int c;  // Use int here, not char
while((c=getc(fp))!=EOF) {
  if (prev == '\n'){
    printf("%05lu ", ++ln);
  }
  putchar(c);
  prev = c;
}
if (prev != '\n') {
  putchar('\n');  // print a \n for input that lacks a final \n
}
printf("lines num: %lu\n", ln);

    fclose(fp);
          // We can append this code to any C program
    // such that it prints its source code.

#endif

#ifdef SHOW_SOURCE_FILE_PATH

       // Prints location of C this C code.
   printf("%s \n",__FILE__);

#endif



/// clear();  /// clearing console window

///system("@cls||clear"); /// or system("cls||clear");

    /// cin.get()/// all system /// C++ all system // platform

    return 0;

    /// system("pause>null"); /// for windows only  /// For debugging only.

}

///Nit: Don't use printf(string);, use puts(string); instead. The former may have UB if string contains a percent sign (even though that is not the case here, I recommend making it a habit).
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

or

system("@cls||clear"); /// or system("cls||clear");

This is actually a quite simple problem. All you have to do is use printf. You don't even need printf or any headers, for that matter.

printf("\e[1;1H\e[2J");
The \e[1;1H sets the screen to the 1st row and 1st column. the 2J overwrites all characters currently on the screen.

You can also use this:

write(0,"\e[1;1H\e[2J",12);
Then you don't need stdio.h.

#include <unistd.h>

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}
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


It is explicitly said in the standard that fflush should only apply to output streams.
*/
