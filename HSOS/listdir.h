void cleanbf()//���������� 
{
	Bar(210,190,1023,745,WHITE);
} 

void drawfile(int x,int y,char *p)//�����ļ��ĺ�׺����ͼ 
{
	if(strcmp(p,"folder")==0)
	{
		Picture(x,y,"fold.bmp");
	}
	else if(strcmp(p,"txt")==0)
	{
		Picture(x,y,"TXTtubiao.bmp");
	}
	else if(strcmp(p,"c")==0)
	{
		Picture(x,y,"Cfile.bmp");
	}
	else if(strcmp(p,"bmp")==0)
	{
		Picture(x,y,"pic,bmp");//"pic,bmp"?
	}
	else
	{
		Picture(x,y,"other.bmp");
	}
}
char* getbkname(char *pix)//��ȡ�к�׺���ļ��ĺ�׺ 
{
	if(strcmp(strrchr(pix,'.'),NULL)==0)
	{
		return "file";//û�к�׺�Ҳ�Ϊ�ļ��� 
	} 
	else
	{
		return strrchr(pix,'.');
	}
}
void drfile(char *pv,int i,char *px,char *mv,char *mx)//�ļ����ƣ�������꣬�ļ����ԣ�ʱ�䣬��С
{
	drawfile(215,190+16*i,px);//������������ļ�ͼ�꺯�� (25*16)
	EngText(250,190+16*i,pv,BLACK);
	EngText(720,190+16*i,px,BLACK);
	EngText(420,190+16*i,mv,BLACK);
	EngText(790,190+16*i,mx,BLACK);
}

void inspectdir(char *path)//��������ͼ 
{
	int count=0;
	int numye;
	char *pix;
	char *miv;
	long mixl;
	char mixc[15];
	struct stat filestat;
	struct dirent *de;   
	DIR *dr = opendir(path); 
	if (dr == NULL) 
	{  
		EngText(600,600,"Could not open directory",BLACK);  
		delay(3000);
		EngText(600,600,"Could not open directory",WHITE); 
		return;  
	}
	
	while ((de = readdir(dr)) != NULL) 
	{  
		char opdt[30];
		strcpy(opdt, path);
		if (strcmp(de->d_name, ".") == 0 || strcmp(de->d_name, "..") == 0)  
		{
	    	continue;
		}  // Skip '.' and '..'  
	    strcat(opdt, "\\");
	    strcat(opdt,de->d_name);//��ʱopdt���ǵ�ǰ���ڱ��������ļ����ļ�·����
		//
		if(stat(opdt,&filestat)==0)
		{
			miv=ctime(&filestat.st_ctime);//��������
			mixl=filestat.st_size;
			sprintf(mixc,"%ld",mixl);//mixc��Ϊ��С 
			if(filestat.st_mode&S_IFDIR)
			{
				pix="folder";
			} 
			else
			pix=getbkname(de->d_name);//pixΪ��׺��
		}
		//
	    drfile(de->d_name,count,pix,miv,mixc);
	    count++;
	    numye=(count/30)+1;//��¼ҳ�� ,������Ҫ������ν������ļ���ҳ��� 
	    
	}  
		closedir(dr);  // Close directory  
}  
