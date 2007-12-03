#ifndef __LIBDOS_H__
#define __LIBDOS_H__

#include <conio.h>

typedef unsigned char screen_buffer_t;

void init_libdos();

int get_number_of_lines();
int get_number_of_cols();

inline void enable_smart_cursor(bool ) { }
inline bool is_smart_cursor_enabled()  { return (false); }
void set_cursor_enabled(bool enabled);
bool is_cursor_enabled();
void clear_to_end_of_line();
int getch_ck();
static inline void set_mouse_enabled(bool enabled) { }

void message_out(int mline, int colour, const char *str, int firstcol = 0,
                 bool newline = true);
void clear_message_window();
inline void update_screen()
{
}

void putwch(unsigned c);

inline void put_colour_ch(int colour, unsigned ch)
{
    textattr(colour);
    putwch(ch);
}

#endif
