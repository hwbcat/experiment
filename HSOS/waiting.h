buttons *manager_waiting;
char *waitingwords1="��ӭʹ��";
char *waitingwords2="�û�";
char *waitingwords3="��ѡ�����򷵻�";

void waiting_click()
{
	tick_click(manager_waiting);
}
void waiting_move()
{
	tick_move(manager_waiting);
}
void leave_system()
{
	paint(1);
} 
void load_system()
{
	paint(4);
}



void draw_waiting() {
    button *btn;
	Picture(0,0,"waiting.bmp");
 	btn = new_button(60, 10, 260, 50, "������Դ������", IvoryWhite, DARK_GREY, LIGHT_GREY, load_system);
    manager_waiting = push(btn, NULL);
    btn = new_button(60, 60, 260, 100, "���ص�½����", IvoryWhite, DARK_GREY, LIGHT_GREY, leave_system);
    manager_waiting = push(btn, manager_waiting);
	Text(60, 180, waitingwords1, PINK);
	Text(60, 280, waitingwords2, PINK);
	Text(60, 380, waitingwords3, PINK);
    tick_init(manager_waiting);

    callback1 = waiting_click;
    callback2 = unset;
    callback3 = waiting_move;
}
