/*
��������������Խ����bug�����ͷ�ļ�����������ͷ�ļ�ʹ�ü��� 
*/

/*
������������ 
*/ 


/*
��ʼ������ 
*/
//buttons *manager_test;

void test_move() {
    //tick_move(manager_test);
}

void test_click() {
    //tick_click(manager_test);
}
/*
������ 
*/
void draw_test() {
/*
��ͼ���� 
*/ 
    /*button *btn;
    btn = new_button(10, 10, 120, 50, "����һ", IvoryWhite, DARK_GREY, LIGHT_GREY, test1);
    manager_test = push(btn, NULL);
    btn = new_button(10, 60, 120, 100, "���Զ�", IvoryWhite, DARK_GREY, LIGHT_GREY, test2);
    manager_test = push(btn, manager_test);
	Bar(0, 0, SCR_WIDTH, SCR_HEIGHT, BLACK);*/
/*
����ͷ�ļ��������ò��֣�Ҳ����������д���� 
*/	
	//funcmain(); 
		
/*
��ʼ������ 
*/	
    //tick_init(manager_test);
    callback1 = test_click;
    callback2 = unset;
    callback3 = test_move;

}
