//文件浏览模块 
char **bkdirs;//后退栈 
char **fwdirs;//前进栈 

void test1() {
    paint(3);
}

void test2() {
    draw_error("debug", "test2");
}

/********************************
 * FUNCTION:side_inspectdir
 * DESCRIPTION:遍历，并在导航窗格区对文件夹绘图 
 * INPUT: 
 * RETURN:  
 * OTHERS: 做法参考inspectdir 
 ********************************/
void side_inspectdir()
{
	EngText(240,480,"value",BLACK);
	
}

/********************************
 * FUNCTION:bkdir
 * DESCRIPTION:目录后退 
 * INPUT:  
 * RETURN: 
 * OTHERS: 将当前目录入前进栈，后退栈出栈，设为当前目录（，遍历它） 
 ********************************/
 void bkdir()
 {
 	
 }
 
 /********************************
  * FUNCTION:fwdir
  * DESCRIPTION:目录前进 
  * INPUT:  
  * RETURN: 
  * OTHERS: 将当前目录入后退栈，前进栈出栈，设为当前目录（，遍历它） 
  ********************************/
void fwdir()
{
	
}
  
/********************************
 * FUNCTION:funcatrri
 * DESCRIPTION:新开窗口，查看选中文件（夹）的文件属性 
 * INPUT: 选中文件（夹）的路径 
 * RETURN: 无 
 * OTHERS: 可能需要新的page来实现，点击属性窗口以外的区域后paint主界面 //开一个文件，记录当前界面，开窗口， 
 ********************************/
void funcattri()
{
	test1();
} 

/********************************
 * FUNCTION:topath 
 * DESCRIPTION:进入路径输入框，点击箭头（或按下回车）后加载输入路径 
 * INPUT: 
 * RETURN: 
 * OTHERS: 怎么做？ 
 ********************************/
void topath()
{
	
}

/********************************
 * FUNCTION:funcsearch 
 * DESCRIPTION:进入搜索输入框，在当前目录搜索输入内容 
 * INPUT: 
 * RETURN: 
 * OTHERS: 怎么做？ 
 ********************************/
void funcsearch()
{
	test1();
} 

/********************************
 * FUNCTION:funcexit 
 * DESCRIPTION:退出资源管理器，到waiting界面 
 * INPUT: 无 
 * RETURN: 无 
 * OTHERS: 无 
 ********************************/
void funcexit()
{
	paint(3);
} 

/************************************************************************/ 
//文件操作模块 

char newflfd_name[10];//新建文件或文件夹的名称

/********************************
 * FUNCTION:funnewfolder
 * DESCRIPTION:显示键盘输入命名框，新建文件夹，名称过长报错 
 * INPUT: 当前目录 
 * RETURN: 无 
 * OTHERS: 键盘输入可参考_update()和hello_key() 
 ********************************/
void funcnewfolder()
{
	test1();
} 

/********************************
 * FUNCTION:funcnewfile 
 * DESCRIPTION:显示键盘输入命名框，新建txt文件，名称过长报错 
 * INPUT: 当前目录 
 * RETURN: 无 
 * OTHERS: 目前只新建txt文件；键盘输入可参考_update()和hello_key()  
 ********************************/ 
void funcnewfile()
{
	test1();
} 

/********************************
 * FUNCTION:funccopy
 * DESCRIPTION:复制，将路径存入char **copylist 
 * INPUT:选中区域的文件路径 
 * RETURN:
 * OTHERS:与funcstick结合使用 
 ********************************/
void funccopy()
{
	test1();
} 

/********************************
 * FUNCTION:funcshear
 * DESCRIPTION:剪切，将路径存入char **copylist 
 * INPUT:选中区域的文件路径  
 * RETURN: 
 * OTHERS:与funcstick结合使用 
 ********************************/
void funcshear()
{
	test1();
}
 
/********************************
 * FUNCTION:funcstick
 * DESCRIPTION:粘贴，在当前目录中，粘贴copylist中所有路径对应的文件；如果是剪切，删除源文件 
 * INPUT: 
 * RETURN: 
 * OTHERS:与funccopy结合使用 
 ********************************/
void funcstick()
{
	test1();
} 

/********************************
 * FUNCTION:funcdelete
 * DESCRIPTION:删除，删除选中区域的文件（夹） 
 * INPUT: 删除区域的文件路径 
 * RETURN: 
 * OTHERS: 删除文件和文件夹要分开处理，遇到文件夹则递归？ 
 ********************************/
void funcdelete()
{
	test1();
} 

/********************************
 * FUNCTION:funcrename
 * DESCRIPTION:显示重命名输入框，重命名选中文件（夹） 
 * INPUT:  
 * RETURN: 
 * OTHERS: 键盘输入可参考_update()和hello_key()  
 ********************************/
void funcrename()
{
	
}



