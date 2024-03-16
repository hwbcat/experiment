#ifndef PAGE
#define PAGE

#include "HsOS.h"

void paint(int i);

char qwq[5];
char tmp[50];
FILE *fp;


void toChar(int i) {
    qwq[0] = '0' + ((i % 10000) / 1000);
    qwq[1] = '0' + ((i % 1000) / 100);
    qwq[2] = '0' + ((i % 100) / 10);
    qwq[3] = '0' + (i % 10);
    qwq[4] = '\0';
}

void draw_error(char *s1, char *s2) {
    callback1 = unset;
    callback2 = unset;
    callback3 = unset;
    Bar(0, 0, SCR_WIDTH, SCR_HEIGHT, BLUE);
    EngText(2, 2, "A fatal error has occured :(", WHITE);
    EngText(2, 17, "Details:", WHITE);
    EngText(2, 32, s1, WHITE);
    EngText(2, 47, "Caused by:", WHITE);
    EngText(2, 62, s2, WHITE);
    while (true) {
        delay(1000);
    }
}

/*
 * callback1(void) click
 * callback2(int) keyboard
 * callback3(void) move
 */
/*
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
*/
#include "dir.h"
#include "dirent.h"
#include "stat.h"
 

#include "listdir.h"
#include "funcmain.h"
#include "drawmain.h"
#include "hello.h"
#include "register.h"
#include "testpage.h"
#include "waiting.h"


void paint(int i) {
    switch (i) {
        default:
            toChar(i);
            draw_error("Page not found.", qwq);
            break;
        case 1:
            draw_hello();
            break;
        case 2:
            draw_register();
            break;
        case 3:
            draw_waiting();
            break;
        case 4:
        	drawmain();
        	break;
    }
    update_mouse(0, 0, SCR_WIDTH, SCR_HEIGHT);
    draw_mouse(mouse.x, mouse.y - 1);
}

#endif
