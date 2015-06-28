#!/usr/bin/env python

import curses

myscreen = curses.initscr()

myscreen.border(0)
myscreen.addstr(12, 25, "Hello world!")
myscreen.refresh()
myscreen.getch()

curses.endwin()
