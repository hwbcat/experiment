/*
如果后续出现难以解决的bug，这个头文件当成主函数头文件使用即可 
*/

/*
声明变量部分 
*/ 


/*
初始化部分 
*/
//buttons *manager_test;

void test_move() {
    //tick_move(manager_test);
}

void test_click() {
    //tick_click(manager_test);
}
/*
主函数 
*/
void draw_test() {
/*
绘图部分 
*/ 
    /*button *btn;
    btn = new_button(10, 10, 120, 50, "测试一", IvoryWhite, DARK_GREY, LIGHT_GREY, test1);
    manager_test = push(btn, NULL);
    btn = new_button(10, 60, 120, 100, "测试二", IvoryWhite, DARK_GREY, LIGHT_GREY, test2);
    manager_test = push(btn, manager_test);
	Bar(0, 0, SCR_WIDTH, SCR_HEIGHT, BLACK);*/
/*
其他头文件函数调用部分，也是主函数编写部分 
*/	
	//funcmain(); 
		
/*
初始化部分 
*/	
    //tick_init(manager_test);
    callback1 = test_click;
    callback2 = unset;
    callback3 = test_move;

}
