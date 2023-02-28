
#include "drivers/frame_buffer.h"
#include "segmentation/memory_segments.h"

void kernel(){

    segments_install_gdt();

    char ptr2[] = "Welcome To ReverbOS";

    fb_write(ptr2, 19);
}
