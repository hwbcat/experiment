//�ļ����ģ�� 
char **bkdirs;//����ջ 
char **fwdirs;//ǰ��ջ 

void test1() {
    paint(3);
}

void test2() {
    draw_error("debug", "test2");
}

/********************************
 * FUNCTION:side_inspectdir
 * DESCRIPTION:���������ڵ������������ļ��л�ͼ 
 * INPUT: 
 * RETURN:  
 * OTHERS: �����ο�inspectdir 
 ********************************/
void side_inspectdir()
{
	EngText(240,480,"value",BLACK);
	
}

/********************************
 * FUNCTION:bkdir
 * DESCRIPTION:Ŀ¼���� 
 * INPUT:  
 * RETURN: 
 * OTHERS: ����ǰĿ¼��ǰ��ջ������ջ��ջ����Ϊ��ǰĿ¼������������ 
 ********************************/
 void bkdir()
 {
 	
 }
 
 /********************************
  * FUNCTION:fwdir
  * DESCRIPTION:Ŀ¼ǰ�� 
  * INPUT:  
  * RETURN: 
  * OTHERS: ����ǰĿ¼�����ջ��ǰ��ջ��ջ����Ϊ��ǰĿ¼������������ 
  ********************************/
void fwdir()
{
	
}
  
/********************************
 * FUNCTION:funcatrri
 * DESCRIPTION:�¿����ڣ��鿴ѡ���ļ����У����ļ����� 
 * INPUT: ѡ���ļ����У���·�� 
 * RETURN: �� 
 * OTHERS: ������Ҫ�µ�page��ʵ�֣�������Դ�������������paint������ //��һ���ļ�����¼��ǰ���棬�����ڣ� 
 ********************************/
void funcattri()
{
	test1();
} 

/********************************
 * FUNCTION:topath 
 * DESCRIPTION:����·������򣬵����ͷ�����»س������������·�� 
 * INPUT: 
 * RETURN: 
 * OTHERS: ��ô���� 
 ********************************/
void topath()
{
	
}

/********************************
 * FUNCTION:funcsearch 
 * DESCRIPTION:��������������ڵ�ǰĿ¼������������ 
 * INPUT: 
 * RETURN: 
 * OTHERS: ��ô���� 
 ********************************/
void funcsearch()
{
	test1();
} 

/********************************
 * FUNCTION:funcexit 
 * DESCRIPTION:�˳���Դ����������waiting���� 
 * INPUT: �� 
 * RETURN: �� 
 * OTHERS: �� 
 ********************************/
void funcexit()
{
	paint(3);
} 

/************************************************************************/ 
//�ļ�����ģ�� 

char newflfd_name[10];//�½��ļ����ļ��е�����

/********************************
 * FUNCTION:funnewfolder
 * DESCRIPTION:��ʾ���������������½��ļ��У����ƹ������� 
 * INPUT: ��ǰĿ¼ 
 * RETURN: �� 
 * OTHERS: ��������ɲο�_update()��hello_key() 
 ********************************/
void funcnewfolder()
{
	test1();
} 

/********************************
 * FUNCTION:funcnewfile 
 * DESCRIPTION:��ʾ���������������½�txt�ļ������ƹ������� 
 * INPUT: ��ǰĿ¼ 
 * RETURN: �� 
 * OTHERS: Ŀǰֻ�½�txt�ļ�����������ɲο�_update()��hello_key()  
 ********************************/ 
void funcnewfile()
{
	test1();
} 

/********************************
 * FUNCTION:funccopy
 * DESCRIPTION:���ƣ���·������char **copylist 
 * INPUT:ѡ��������ļ�·�� 
 * RETURN:
 * OTHERS:��funcstick���ʹ�� 
 ********************************/
void funccopy()
{
	test1();
} 

/********************************
 * FUNCTION:funcshear
 * DESCRIPTION:���У���·������char **copylist 
 * INPUT:ѡ��������ļ�·��  
 * RETURN: 
 * OTHERS:��funcstick���ʹ�� 
 ********************************/
void funcshear()
{
	test1();
}
 
/********************************
 * FUNCTION:funcstick
 * DESCRIPTION:ճ�����ڵ�ǰĿ¼�У�ճ��copylist������·����Ӧ���ļ�������Ǽ��У�ɾ��Դ�ļ� 
 * INPUT: 
 * RETURN: 
 * OTHERS:��funccopy���ʹ�� 
 ********************************/
void funcstick()
{
	test1();
} 

/********************************
 * FUNCTION:funcdelete
 * DESCRIPTION:ɾ����ɾ��ѡ��������ļ����У� 
 * INPUT: ɾ��������ļ�·�� 
 * RETURN: 
 * OTHERS: ɾ���ļ����ļ���Ҫ�ֿ����������ļ�����ݹ飿 
 ********************************/
void funcdelete()
{
	test1();
} 

/********************************
 * FUNCTION:funcrename
 * DESCRIPTION:��ʾ�����������������ѡ���ļ����У� 
 * INPUT:  
 * RETURN: 
 * OTHERS: ��������ɲο�_update()��hello_key()  
 ********************************/
void funcrename()
{
	
}



