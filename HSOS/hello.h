int hello_selected = 0;
// 0 none 1 username 2 password
char hello_user[30];
char hello_password[30];
char hello_cover[30];
char *hello_msg;
buttons *manager_hello;

void hello_click() {
    hello_selected = 0;
    if (mouse.x > 335 && mouse.x < 671 && mouse.y > 320 && mouse.y < 352) {
        hello_selected = 1;
    }
    if (mouse.x > 335 && mouse.x < 671 && mouse.y > 412 && mouse.y < 445) {
        hello_selected = 2;
    }
    tick_click(manager_hello);
}

void hello_register_click() {
    paint(2);
}

void hello_login_click() {
    strcpy(tmp, "data\\");
    strcat(tmp, hello_user);
    fp = fopen(tmp, "rb");
    if (fp == NULL) {
        hello_msg = "ÓÃ»§²»´æÔÚ£¬ÇëÖØÊÔ»ò½øÐÐ×¢²á£¡";
        paint(1);
    } else {
        fgets(tmp, 45, fp);
        fclose(fp);
        if (!strcmp(tmp, hello_password)) 
		{
            paint(3);
        } else {
            hello_msg = "µÇÂ¼Ê§°Ü£¬ÃÜÂë´íÎó£¡";
            paint(1);
        }
    }
}

void hello_key(int i) {
    int len, j;
    if (hello_selected == 1) {
        len = strlen(hello_user);
        if (i == 8) {
            if (len > 0) {
                hello_user[len - 1] = '\0';
            }
        } else {
            if (len < 19) {
                hello_user[len] = i;
                hello_user[len + 1] = '\0';
            }
        }
        Bar(336, 321, 672, 351, WHITE);
        EngText(337, 324, hello_user, BLACK);
    }
    if (hello_selected == 2) {
        len = strlen(hello_password);
        if (i == 8) {
            if (len > 0) {
                hello_password[len - 1] = '\0';
            }
        } else {
            if (len < 19) {
                hello_password[len] = i;
                hello_password[len + 1] = '\0';
            }
        }
        len = strlen(hello_password);
        Bar(336, 413, 672, 444, WHITE);
        for (j = 0; j < 30; j++) {
            hello_cover[j] = '*';
        }
        hello_cover[len] = '\0';
        EngText(337, 416, hello_cover, BLACK);
    }
}

void hello_move() {
    tick_move(manager_hello);
}

void draw_hello() {
    button *btn;
    Picture(0, 0, "welcome1.bmp");
    hello_user[0] = '\0';
    hello_password[0] = '\0';

    btn = new_button(302, 545, 504, 596, "µÇÂ¼", IvoryWhite, DARK_GREY, LIGHT_GREY, hello_login_click);
    manager_hello = push(btn, NULL);
    btn = new_button(602, 545, 804, 596, "×¢²á", IvoryWhite, DARK_GREY, LIGHT_GREY, hello_register_click);
    manager_hello = push(btn, manager_hello);
    tick_init(manager_hello);

    callback1 = hello_click;
    callback2 = hello_key;
    callback3 = hello_move;
    hello_user[0] = '\0';
    hello_password[0] = '\0';
    hello_cover[0] = '\0';
    Text(380, 660, hello_msg, PINK);
}
