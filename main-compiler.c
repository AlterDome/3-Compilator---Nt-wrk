//// Мой первый компилятор 15.01.2022 г.
//// Лексический анализатор, Парсер.
//// VELES language compiler 2022 (c)
//// Author  Rybochkin Aleksei
//// it's my first compilator
//// Compiled in GCC in Windows 10  x64



#include <stdio.h>
#include <stdlib.h>

///////////////////////*************** Global Variable
    int i = 0; // usual var for iterations

    FILE* filein[]; // SourceCode of Veles program

    FILE* fileout[]; // Ready. compilled file in BIN format

    char *filename[];  // *filename[] = Source Code of your program...
    char litera = 0; // litera is ones of C...
    char look = 0; // Lookahed Variables in Parser function and more...


///////////////////////*************** HELP
void help(void)
{
  printf(" My program compilator \n");
  printf(" -Help - to view this window \n");
  printf(" -S, -s - to make Assembler list \n");
  printf(" -O, -o - to make Object list \n");
  printf(" -H, -h - to make HEX listing  \n");
  printf(" End of help window....... \n");
  printf(" \n");
  printf(" \n");
}

/*
void TRY_AGAIN(void)
{
    printf(" ..... \n");
}
*/

///////////////////////*************** LEXER  # 1
// Search error in text and search rezerved word
//
char LEXER(char filename[])
{
  printf(" START LEXER ...  \n");
  printf(" \n");
  //// these is start LEXER;
  while (look = fgetc(filein) != EOF )
        {
         printf("%c", look);
        }
         printf(" \n");
         printf(" END LEXER ...  \n");
         printf(" \n");

}

///////////////////////*************** PARSER  # 2
// CREATE A INNER BINARY CODE...  AST
//
char PARSER(char filename[])
{
  printf(" START PARSER ...  \n");
  printf(" \n");
  //// these is start PARSER;
  while (look = fgetc(filein) != EOF )
        {
         printf("%c", look);
        }
         printf(" \n");
         printf(" END PARSER ...  \n");
         printf(" \n");

}





///////////////////////*************** MAIN
int main(int argc, char* argv[])
{

   printf(" \n");
   printf("    VELES compiler 2022 (c)  \n");
   printf("\n");
   printf(" \n");
   help();
//

    if (argc!=2) {
    printf("You are forgotten input filename to analisis.\n");
    printf(" \n");
    exit(1);
     }

    else {
         filein[0] = 0, i = 0;

      //   fileout[] = filein[];

         for (argv[1][i]; argv[1][i] != 0 ; i++ )
            filein[i] = argv[1][i];

         for (filein[i]; fileout[i] != 0 ; i++ )
              fileout[i] = filein[i];

    *filein = fopen(argv[1], "r");

        fputc(filein,"Hello ");

                      ///// Если октрыли файл - ТО начинаем поцедуру to start PARSER, LEXER
                    char LEXER(char filein[]);

                    char PARSER(char filename[]);

	     }
///// Если октрыли файл - ТО начинаем поцедуру to start PARSER,
   //char PARSER(char filein[]);



////// HERE THE PLACE OF FUNCTIONS




////// HERE THE END OF PLACE OF FUNCTIONS



///////// HERE THE PLACE OF CLOSE ALL FILES
fclose(filein);
printf(" \n");
printf(" \n");
printf("Good bye ...");
printf(fileout," %c \n");
getchar();
}
///////////////////////*************** END MAIN












