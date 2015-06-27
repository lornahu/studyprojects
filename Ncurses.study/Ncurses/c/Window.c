#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	start_color();
	WINDOW* win;
	win = newwin(10,10,10,10);
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("Something");
	attroff(COLOR_PAIR(1));
	wrefresh(win);
	getch();
	delwin(win);
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
