/******************************************************************************/
/*                                                                            */
/*             Paper tape puncher emulator for *unix terminal                 */
/*                                                                            */
/*  Frederico Brom                                              25/08/2023    */
/******************************************************************************/

#include <stdio.h>

int main(int argc, char **argv)
{
    /* Feed paper Head */
    fprintf(stdout, " /\\/\\/\\/\\/\\\n");
    fprintf(stdout, "|     .   |\n");
    fprintf(stdout, "|     .   |\n");

    /* Punch data */
    int data;
    while ((data = getc(stdin)) != EOF)
    {
        putc('|', stdout);
        putc((data & 128)?'o':' ', stdout);
        putc((data & 64)?'o':' ', stdout);
        putc((data & 32)?'o':' ', stdout);
        putc((data & 16)?'o':' ', stdout);
        putc((data & 8)?'o':' ', stdout);
        putc('.', stdout);
        putc((data & 4)?'o':' ', stdout);
        putc((data & 2)?'o':' ', stdout);
        putc((data & 1)?'o':' ', stdout);
        putc('|', stdout);
        putc('\n', stdout);
    }

    /* Feed paper */
    fprintf(stdout, "|     .   |\n");
    fprintf(stdout, "|     .   |\n");
    fprintf(stdout, " \\/\\/\\/\\/\\/\n");

    return 0;
}