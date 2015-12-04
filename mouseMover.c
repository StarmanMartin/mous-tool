
#include <conio.h>
#include <windows.h>

#include "_cgo_export.h"
void ACFunction(int c) {
    printf("ACFunction - ()\n");
    AGoFunction();
    POINT p;
    GetCursorPos(&p);
    
    if(c == 1) // Right Arrow Key
        p.x += 1;  // Move Cursor Right
    if(c == 2) // Left Arrow Key
        p.x -= 1;  // Move Cursor Left
    if(c == 3) // Up Arrow Key
        p.y += 1;  // Move Cursor Up
    if(c == 4) // Down Arrow KEy
        p.y -= 1;  // Move Cursor Down
    
    SetCursorPos(p.x,p.y);
}

