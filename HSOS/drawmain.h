/*
���в�����ͼ����ʹ����ͼ����putpixel ��SVGA�����ˣ� 
*/

buttons *manager_drawmain;

/********************************
 * FUNCTION:drawmain_move
 * DESCRIPTION:δ֪ 
 * INPUT:�� 
 * RETURN:�� 
 * OTHERS:callback3���� 
 ********************************/
void drawmain_move() 
{
    tick_move(manager_drawmain);
}

/********************************
 * FUNCTION:drawmain_click 
 * DESCRIPTION:������������ж� 
 * INPUT:�� 
 * RETURN:�� 
 * OTHERS:callback1���� 
 ********************************/
void drawmain_click() {
	if (mouse.x > 10 && mouse.x < 42 && mouse.y > 137 && mouse.y < 161) 
	{
	    test1();//��������ΪĿ¼���˺��� 
	}
	if (mouse.x > 52 && mouse.x < 84 && mouse.y > 137 && mouse.y < 161)
	{
	    test1();//��������ΪĿ¼ǰ�� 
	}
	if (mouse.x > 10 && mouse.x < 60 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������copy���� 
	}
	if (mouse.x > 70 && mouse.x < 120 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊpaste����
	}
	if (mouse.x > 130 && mouse.x < 180 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊshear����
	}
	if (mouse.x > 220 && mouse.x < 270 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊdelete����
	}
	if (mouse.x > 300 && mouse.x < 350 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊrename����
	}
	if (mouse.x > 390 && mouse.x < 440 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊnewfolder����
	}
	if (mouse.x > 470 && mouse.x < 520 && mouse.y > 30 && mouse.y < 80) 
	{
		test1();//��������Ϊnewfile����
	}
	if (mouse.x > 550 && mouse.x < 600 && mouse.y > 30 && mouse.y < 80) 
	{
		test1();//��������Ϊsearch attitude����
	}
	if (mouse.x > 640 && mouse.x < 690 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊall select���� 
	}
	if (mouse.x > 700 && mouse.x < 750 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊall unselect���� 
	}
	if (mouse.x > 760 && mouse.x < 810 && mouse.y > 30 && mouse.y < 80) 
	{
	    test1();//��������Ϊthe other���� 
	}
	if (mouse.x > 854 && mouse.x < 886 && mouse.y > 137 && mouse.y < 161) 
	{
	    test1();//��������Ϊsearch���� 
	}
    tick_click(manager_drawmain);
}

/********************************
 * FUNCTION:drawmain
 * DESCRIPTION:���������棬���ð�ť��ͻص����� 
 * INPUT:�� 
 * RETURN:�� 
 * OTHERS:
 ********************************/
void drawmain()
{
	button *btn;
	/*btn = new_button(10, 30, 55, 90, "����", BLACK, WHITE, LIGHT_GREY, funccopy);//����ʹ����ͼ�͵����ߴ磬��ͼ��ô����֣��������ʹ�ð�ť���Լ���click�����ᵼ�¹������޴� 
	manager_drawmain = push(btn, NULL);
	btn = new_button(75, 30, 120, 90, "ճ��", BLACK, WHITE, LIGHT_GREY, funcstick);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(140, 30, 185, 90, "����", BLACK, WHITE, LIGHT_GREY, funcshear);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(210, 30, 255, 90, "ɾ��", BLACK, WHITE, LIGHT_GREY, funcdelete);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(265, 30, 333, 90, "������", BLACK, WHITE, LIGHT_GREY, funcrename);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(395, 30, 463, 90, "�ļ���", BLACK, WHITE, LIGHT_GREY, funcnewfolder);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(473, 30, 518, 90, "�ļ�", BLACK, WHITE, LIGHT_GREY, funcnewfile);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(560, 30, 605, 90, "����", BLACK, WHITE, LIGHT_GREY, funcattri);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(635, 30, 680, 90, "ȫѡ", BLACK, WHITE, LIGHT_GREY, test1);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(700, 30, 745, 90, "ȡ��", BLACK, WHITE, LIGHT_GREY, test1);
	manager_drawmain = push(btn, manager_drawmain);
	btn = new_button(765, 30, 810, 90, "��ѡ", BLACK, WHITE, LIGHT_GREY, test1);
	manager_drawmain = push(btn, manager_drawmain);*/
	btn = new_button(990,0,1024,23, "��", WHITE,BLUE, LIGHT_GREY, funcexit);
	manager_drawmain = push(btn, manager_drawmain);
	//btn = new_button(10, 137, 42, 161, "", BLACK, WHITE, LIGHT_GREY, test1);
	//manager_drawmain = push(btn, manager_drawmain);// ��������ť����ɾ�����ֶ��༭click��������ť�ϲ��ܻ�ͼqwp�� �������൱��ռ��λ�� 
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
	Picture(814,137,"bkdir.bmp");//�����������ͷ��ͼƬ���Ǹ���ģ���������·���� 
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
	Text(865,25,"��ť��",BLACK);
	Text(855,59,"�����ʹ�ù���",BLACK);
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
	//Line(68,137,68,161,BLACK);// ��ͼ��λֱ�� 1
	//Line(829,137,829,161,BLACK);//��ͼ��λֱ��2 
	//Line(862,137,856,161,BLACK);//��ͼ��λֱ��3 
	// 
	tick_init(manager_drawmain);	
	callback1 = drawmain_click;
	callback2 = unset;
	callback3 = drawmain_move;
}
