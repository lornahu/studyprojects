#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	int x,y;
        getmaxyx(stdscr, y, x);
	move(y/2, x/2);
	attron(A_BOLD);
	attron(A_REVERSE);
	printw("%s", "abcdefghijklmn");
	attroff(A_BOLD);
	attroff(A_REVERSE);
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
