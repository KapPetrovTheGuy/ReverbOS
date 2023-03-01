
#include "drivers/frame_buffer.h"
#include "drivers/serial_port.h"
#include "segmentation/memory_segments.h"
#include "interrupts/keyboard.h"
#include "interrupts/interrupts.h"

void kmain(){

    segments_install_gdt();
    interrupts_install_idt();
}
