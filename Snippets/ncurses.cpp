

//Para usar ncurses.h (alternativa a conio.h):


#include <ncurses.h>


int main(void){	
	initscr();			/* Start curses mode 		  */
	printw("Hello World! Press any key ...");	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();
	return 0;
}

En la terminal de visual Studio Cide ponemos:

g++ -o appOut.cpp app.cpp -lncurses

Y ejecutamos: 

./appOut.cpp

