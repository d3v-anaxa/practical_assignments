#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

void copyToAnotherFile(char fin[], char fout[]);

int main(int argc, char **argv)
{
   switch (argc) {
       case 1 :
           printf("Specify Input and Output file\n");
           exit(1);
       case 2 : 
           printf("Specify Output file\n");
           exit(1);
       case 3 :
           if (access(argv[1], F_OK) != 0) {
               printf("\"%s\" file not found!!\n", argv[1]);
               exit(0);
           }
            copyToAnotherFile(argv[1], argv[2]);
            break;
       default :
            printf("Too many arguments\n");
            exit(0);
   }
  return 0;
}

void copyToAnotherFile(char fin[], char fout[])
{
  FILE *fl1, *fl2;
  char ch;
  fl1 = fopen(fin, "r");
  fl2 = fopen(fout, "w");
  ch = fgetc(fl1);
  while (ch != EOF)
  {
    if (ch != ' ') // ignoring whitespaces
      fputc(ch, fl2);
      
    ch = fgetc(fl1);
  }
  printf("File copied successfully\n");
  fclose(fl1);
  fclose(fl2);
}
