#ifndef MESSAGEBOX_X11_MESSAGEBOX_H
#define MESSAGEBOX_X11_MESSAGEBOX_H

#ifdef __cplusplus
extern "C" {
#endif

#include <X11/Xlib.h>

typedef struct Button{
    wchar_t *label;
    int result;
}Button;

int Messagebox(const char* title, const wchar_t* text, const Button* buttons, int numButtons);

#ifdef __cplusplus
}
#endif
    
#endif //MESSAGEBOX_X11_MESSAGEBOX_H
