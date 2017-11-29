#include<ncurses.h>
#include<time.h>
int main()
{
  int i, fine = 10;
  struct timespec lampeggio;
  lampeggio.tv_sec = 0;
  lampeggio.tv_nsec = 700 * 1000 * 1000;
  
  initscr();
  
  curs_set(0);

  for(i = 0; i < fine; i++){
    move(3,3);
    printw("*");
    refresh();
    
    nanosleep(&lampeggio, NULL);
    move(3,3);
    printw(" ");
    refresh();
    
    nanosleep(&lampeggio, NULL);
  }
  mvprintw(0, 0, "premi un tasto per uscire");
  getch();
  endwin();
  return 0;
}
    
