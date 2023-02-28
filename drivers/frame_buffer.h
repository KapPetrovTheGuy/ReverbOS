
#ifndef FRAME_BUFFER_H
#define FRAME_BUFFER_H

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg);
void fb_move_cursor(unsigned short pos);
int fb_write(char *buf, unsigned int len);

#endif
