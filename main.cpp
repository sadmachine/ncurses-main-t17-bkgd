#include <ncurses.h>

int main()
{
    initscr();
    refresh();
    clear();

    if (!has_colors())
    {
        return 1;
    }
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_WHITE, COLOR_BLUE);

    bkgd(COLOR_PAIR(1));
    refresh();

    WINDOW *win = newwin(10, 25, 10, 10);
    wrefresh(win);
    wclear(win);

    wbkgd(win, COLOR_PAIR(2));
    box(win, 0, 0);

    wrefresh(win);

    getch();
    endwin();
    return 0;
}