#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	noecho();
	int c;
	printw("Write something (Escapte to exit)");
	while((c=getch()) != 27)
	{
		move(10,0);
		printw("Keycode : %d, and the character: %c", c, c);
                move(0, 0);
		printw("Write something (Escapte to exit)");
		refresh();
	}

	//getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
