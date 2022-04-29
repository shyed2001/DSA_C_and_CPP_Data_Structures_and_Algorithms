
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



   printf("???  Variable is a container where \0 we can store single information. \n ");

    int luckyNumbers[] = {1, 3, 5, 7, 9, 11, 13, 15}; /// 1 is the first element in this array.

     /// 5 is the third element.   /// 1 or the first element is indexed 0. Last element is indexed n-1, if there is n elements in the array.

        printf(" Variable is a container where we can store single information. \n ");

        printf(" Arrays is a data structure and a container where we can store many information. \n\n");

                printf(" Arrays holds same data types at a container where we can store many information \n at continuous  memory locations. \n\n");

                                    printf(R"(Arrays data structure allows us to read [-3] or [101] element even it has elements from [0] to [100], this is segmentation error)");
   printf("\n");

        printf(" %d \n \n", luckyNumbers [3] ); /// 3 is the index position of 7 in this array.

        printf(" %d \n \n", luckyNumbers[0] );  /// 0 is the index position of 1 in this array.

        printf(" %d \n \n", luckyNumbers[1] ); /// 1 is the index position of 3 in this array.

       luckyNumbers[1] = 100; /// 1 is the index position of 3 in this array that is changed to 100.

       printf(" %d \n \n", luckyNumbers[1] );


    int luckynumbers2[11];  /// Declaring an empty array. This array can only hold 11 elements / items.

          luckynumbers2 [0] = 99;  /// Giving index 0 element a value of 99.

          luckynumbers2 [1] = 55;  /// Giving index 1 element a value of 55.

            printf(" %d \n %d \n",luckynumbers2[0] , luckynumbers2[1] );

            printf(" %d \n %d \n",luckynumbers2[10] , luckynumbers2[11] ); ///

            printf(" %d \n %d \n",luckynumbers2[2] , luckynumbers2[12] );



    char string[] = "free code camp";

    char stringarray[] = "Array"; /// This is an array of char.

printf(R"(char stringarray[] = "Array"; /// This is an array of char.)");
      printf(" %s %s \n",string , stringarray );



      bool turthtable[3];   /// To use bool type array #include <stdbool.h>
/// Declaring an empty bool type array and printing randomly printed the first argument in the {} of an if statement.

    if (turthtable[0] != true)
      {
          printf("True \n");
      }
      else printf("False\n");

      if (turthtable[1] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable[2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable[3] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable[-2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");


      bool turthtable2[3] = {true, false, true};
      /// or bool turthtable2[] = {true, false, true};  this is same as above Array
      /// bool turthtable2[3] ;
      /// turthtable2[0] = true;
      /// turthtable2[1] = false;
      /// turthtable2[2] = true;
      ///  We can use any of the above to create the same array.

       if (turthtable2[0] != true)
      {
          printf("True \n");
      }
      else printf("False\n");

      if (turthtable2[1] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable2[2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable2[3] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

            if (turthtable2[-2] == true)
      {
          printf("True \n");
      }
      else printf("False\n");

       /// This does not work   printf("turthtable2[2] is %c%c%c%c\n", turthtable2[2] );




    /// We can treat individual elements of an array as element but we can not treat the entire array as a variable themselves.
    /// In c we can not assign one array to another array using = or any assignment operators.
    /// we have to use loop to copy individual element of an array to another array.


/// Exercise creating array with a loop.






   clock_t tStart2 = clock();



 int k;

    for ( k = 0; k <= 9; k+=1)  /// K++ or K+=1 are same.
    {
        int battleship[10];
         battleship[k] = k;

         printf (" \n %d \n" ,battleship[k]);

       /// printf (" \n %d \n" ,k );
    }


    printf(R"(   int flats[] = {1,2,3,4,5,6,7};       )");
  printf("\n\n");

  int flats[] = {1,2,3,4,5,6,7};
      printf(R"(      int rooms[];     )");
  printf("\n\n");

    int rooms[10];

      printf(R"(  in C     falts[] = rooms[]; /// this will not work.      )");
  printf("\n\n");

        printf(R"(   We have to copy individual elements each seperately in C .    )");
  printf("\n\n");

  /// falts[] = rooms[]; /// this will not work.


   for (int m = 0; m <= 7; m++ )
   {
       rooms[m] = flats[m];
       printf(" rooms[%d] = %d \n ", m, flats[m]);

   }






/// single character, integer type
    char letter = 'A'; // 65

    // string literal, stored as read-only data
    char *name1 = "Engineer Man";

    // character array initialized from string literal, copied to and stored on the stack
    char name2[] = "Engineer Man";

    // exact same as above
    char name3[] = { 'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', ' ', 'M', 'a', 'n', '\0'};

    // pointer to char, holds up to 128 elements, stored on the stack
    char name4[128];

    // copy string literal into name4, 12 bytes + 1 for null terminator
    strcpy(name4, "Engineer Man");
    printf("%s\n", name4); // Engineer Man
    strlen(name4); // 12

    // access elements -- arr[index] => *(arr + index)
    name4[0]; // E
    *(name4 + 0); // E
    0[name4]; // E
    *(0 + name4); // E

    // modify element
    name4[8] = '-';
    *(name4 + 8) = '-';
    8[name4] = '-';
    *(8 + name4) = '-';

    name4; // Engineer-Man

    // change boundary of string
    name4[8] = '\0';
    printf("%s\n", name4); // Engineer
    strlen(name4); // 8

        printf(" Variable is a container where we can store single information. \n ");

        printf(" Arrays is a data structure and a container where we can store many information. \n\n");

                printf(" Arrays holds same data types at a container where we can store many information \n at continuous  memory locations. \n\n");


///[3][3] number of elements in 2 dimensional array.
///[3][2] number of elements in 2 dimensional array.

int nums2[3][3] =     /// This is a 3 by 3 grid or matrix or table.
  {   { 11, 12, 7},  /// 1 is indexed [0][0].

        {13 , 14, 8},

        {  1 , 16 , 9}
    }; /// 2d array with undeclared elements. This is a 3 by 3 grid or matrix or table. , in memory this is an 9 element one dimentional array only.



    printf("%d \n", nums2[0][0]);  /// 0 index number first element  of the first array indexed 0.
    printf("%d \n", nums2[0][1]);
    printf("  %d \n", nums2[0][2]);
    printf("  %d \n", nums2[1][2]);
    printf("  %d \n", nums2[0][3]);
    printf("%d \n", nums2[1][0]);
    printf("%d \n", nums2[1][1]);
    printf("%d \n", nums2[1][2]);
    printf("%d \n", nums2[2][1]);

int nums[3][2] =
    {   { 1, 2},  /// 1 is indexed [0][0].

        {3 , 4},

        {  5 , 6 }
    };
    printf("%d \n", nums[0][0]);  /// 0 index number first element  of the first array indexed 0.
    printf("%d \n", nums[0][1]);
    printf(" Bug %d \n", nums[0][2]);
    printf(" Bug %d \n", nums[0][3]);
    printf("%d \n", nums[1][0]);
    printf("%d \n", nums[1][1]);

    int nums3[4][4];  /// Declare a 2d array with 4 elements row and column.

    nums3[1][0]=10; /// Assigning a variable element in the array.


    int i,j;

    int nums5[3][3] =
  {   { 11, 12, 7},  /// 1 is indexed [0][0].

        {13 , 14, 8},

        {  15 , 16 , 9}

  };

    for (i=0; i< 3; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            printf(" %d, ", nums5[i][j]);
        }
        printf("\n");
    }

        for (i=0; i< 4; i++)
    {
            for (j = 0 ; j < 4 ; j++)
            {
                printf(" %d, ", nums3[i][j]);
            }
        printf("\n");
    }



    printf("Time taken: %.5fs\n", (double)(clock() - tStart2)/CLOCKS_PER_SEC);


    printf("Total Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    cin.get();/// all system /// C++ all system // platform

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
Syntax
exit() is not good, the program does not compiles or shut down properly and may cause memory errors.
*/
