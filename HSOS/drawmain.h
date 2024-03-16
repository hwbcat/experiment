/*
所有不规则图案均使用贴图或者putpixel （SVGA画不了） 
*/

buttons *manager_drawmain;

/********************************
 * FUNCTION:drawmain_move
 * DESCRIPTION:未知 
 * INPUT:无 
 * RETURN:无 
 * OTHERS:callback3类型 
 ********************************/
void drawmain_move() 
{
    tick_move(manager_drawmain);
}

/********************************
 * FUNCTION:drawmain_click 
 * DESCRIPTION:主界面鼠标点击判定 
 * INPUT:无 
 * RETURN:无 
 * OTHERS:callback1类型 
 ********************************/
void drawmain_click() {
	if (mouse.x > 10 && mouse.x < 42 && mouse.y > 137 && mouse.y < 161) 
	{
	    test1();//后续更新为目录后退函数 
	}
	if (mouse.x > 52 && mouse.x < 84 && mouse.y > 137 && mouse.y < 161)
	{
	    test1();//后续更新为目录前进 
	}
	if (mouse.x > 10 && mouse.x < 60 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新copy函数 
	}
	if (mouse.x > 70 && mouse.x < 120 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为paste函数
	}
	if (mouse.x > 130 && mouse.x < 180 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为shear函数
	}
	if (mouse.x > 220 && mouse.x < 270 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为delete函数
	}
	if (mouse.x > 300 && mouse.x < 350 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为rename函数
	}
	if (mouse.x > 390 && mouse.x < 440 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为newfolder函数
	}
	if (mouse.x > 470 && mouse.x < 520 && mouse.y > 30 && mouse.y < 80) 
	{
		test1();//后续更新为newfile函数
	}
	if (mouse.x > 550 && mouse.x < 600 && mouse.y > 30 && mouse.y < 80) 
	{
		test1();//后续更新为search attitude函数
	}
	if (mouse.x > 640 && mouse.x < 690 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为all select函数 
	}
	if (mouse.x > 700 && mouse.x < 750 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为all unselect函数 
	}
	if (mouse.x > 760 && mouse.x < 810 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//后续更新为the other函数 
	}
	if (mouse.x > 854 && mouse.x < 886 && mouse.y > 137 && mouse.y < 161) 
	{
	    test1();//后续更新为search函数 
	}
    tick_click(manager_drawmain);
}

/********************************
 * FUNCTION:drawmain
 * DESCRIPTION:绘制主界面，设置按钮组和回调函数 
 * INPUT:无 
 * RETURN:无 
 * OTHERS:
 ********************************/
void drawmain()
{
	button *btn;
	/*btn = new_button(10, 30, 55, 90, "复制", BLACK, WHITE, LIGHT_GREY, funccopy);//后续使用贴图就调整尺寸，贴图最好带文字，否则很难使用按钮，自己编click函数会导致工程量巨大。 
	manager_drawmain = push(btn, NULL);
	btn = new_button(75, 30, 120, 90, "粘贴", BLACK, WHITE, LIGHT_GREY, funcstick);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(140, 30, 185, 90, "剪切", BLACK, WHITE, LIGHT_GREY, funcshear);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(210, 30, 255, 90, "删除", BLACK, WHITE, LIGHT_GREY, funcdelete);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(265, 30, 333, 90, "重命名", BLACK, WHITE, LIGHT_GREY, funcrename);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(395, 30, 463, 90, "文件夹", BLACK, WHITE, LIGHT_GREY, funcnewfolder);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(473, 30, 518, 90, "文件", BLACK, WHITE, LIGHT_GREY, funcnewfile);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(560, 30, 605, 90, "属性", BLACK, WHITE, LIGHT_GREY, funcattri);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(635, 30, 680, 90, "全选", BLACK, WHITE, LIGHT_GREY, test1);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(700, 30, 745, 90, "取消", BLACK, WHITE, LIGHT_GREY, test1);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(765, 30, 810, 90, "反选", BLACK, WHITE, LIGHT_GREY, test1);
	manager_drawmain = push(btn, manager_drawmain);*/
	btn = new_button(990,0,1024,23, "Ｘ", WHITE,BLUE, LIGHT_GREY, funcexit);
	manager_drawmain = push(btn, manager_drawmain);
	//btn = new_button(10, 137, 42, 161, "", BLACK, WHITE, LIGHT_GREY, test1);
	//manager_drawmain = push(btn, manager_drawmain);// 这两个按钮后续删除并手动编辑click函数（按钮上不能画图qwp） ，现在相当于占个位置 
	//btn = new_button(52, 137, 84, 161, "", BLACK, WHITE, LIGHT_GREY, test1);
	//manager_drawmain = push(btn, manager_drawmain);
	Line(26,137,26,161,BLACK);
	Line(68,137,68,161,BLACK);
	//
	Bar(0,0,1024,768,WHITE);
	Bar(0,95,1024,115,BLACK);
	Bar(0, 0, 1024, 23, BLUE);
	Bar(0,746,1024,768,BLUE);
	//
	Picture(10,137,"bkdir.bmp");
	Picture(52,137,"fwdir.bmp");
	Picture(814,137,"bkdir.bmp");//这里是想左箭头的图片，是干嘛的，加载输入路径？ 
	Picture(854,137,"search.bmp");
	//
	Picture(10,30,"copy.bmp");
	Picture(70,30,"paste.bmp");
	Picture(130,30,"jianqie.bmp");
	Picture(220,30,"delete1.bmp");
	Picture(300,30,"rename.bmp");
	Picture(390,30,"folder.bmp");
	Picture(470,30,"default.bmp");
	Picture(550,30,"search1.bmp");
	Picture(640,30,"slc_tall.bmp");
	Picture(700,32,"unslct.bmp");
	Picture(760,25,"rvrs_sel.bmp");
	//
	EngText(12,2,"win_pro source manager ",WHITE);
	EngText(440,97,"function help",WHITE);
	EngText(10,115,"copy",BLACK);
	EngText(70,115,"paste",BLACK);
	EngText(130,115,"shear",BLACK);
	EngText(220,115,"delete",BLACK);
	EngText(300,115,"rename",BLACK);
	EngText(390,115,"folder",BLACK);
	EngText(470,115,"file",BLACK);
	EngText(550,115,"nature",BLACK);
	EngText(640,115,"alslt",BLACK);
	EngText(700,115,"unslt",BLACK);
	EngText(760,115,"bkslt",BLACK);
	/* 
	EngText(67,115,"ClipBoard",BLACK);
	EngText(260,115,"Orgnize",BLACK);
	EngText(415,115,"New_built",BLACK);
	EngText(549,115,"Nature",BLACK);
	EngText(697,115,"Choose",BLACK);
	*/
	EngText(240,166,"Name",BLACK);
	EngText(420,166,"Made date",BLACK);
	EngText(720,166,"Nature",BLACK);
	EngText(790,166,"Size",BLACK);
	EngText(830,166,"(kb)",BLACK);
	EngText(724,746,"MADE  BY  202305  HWB  WD",WHITE);
	Text(865,25,"按钮区",BLACK);
	Text(855,59,"点击可使用功能",BLACK);
	//
	Line(0, 130, 1024, 130,BLACK);
	Line(209, 161, 209, 745,BLACK);
	//
	Line(201, 24, 201, 129,BLACK);
	Line(378, 24, 378, 129,BLACK);
	Line(538, 24, 538, 129,BLACK);
	Line(619, 24, 619, 129,BLACK);
	Line(841, 24, 841, 129,BLACK);
	//
	Line(132,137,841,137,BLACK);
	Line(132,137,132,161,BLACK);
	Line(817,137,817,161,BLACK);
	Line(132,161,841,161,BLACK);
	Line(841,137,841,161,BLACK);
	//
	Line(848,137,1016,137,BLACK);
	Line(1016,137,1016,161,BLACK);
	Line(848,137,848,161,BLACK);
	Line(848,161,1016,161,BLACK);
	//
	Line(209,185,920,185,BLACK);//
	Line(887,137,887,161,BLACK);
	//
	Line(6,137,84,137,BLACK);
	Line(6,163,84,163,BLACK);
	Line(6,137,6,163,BLACK);
	Line(84,137,84,163,BLACK);
	Line(47,137,47,163,BLACK);
	//Line(26,137,26,161,BLACK);
	//Line(68,137,68,161,BLACK);// 贴图定位直线 1
	//Line(829,137,829,161,BLACK);//贴图定位直线2 
	//Line(862,137,856,161,BLACK);//贴图定位直线3 
	// 
	tick_init(manager_drawmain);	
	callback1 = drawmain_click;
	callback2 = unset;
	callback3 = drawmain_move;
}
