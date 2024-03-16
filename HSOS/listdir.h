void cleanbf()//清屏函数？ 
{
	Bar(210,190,1023,745,WHITE);
} 

void drawfile(int x,int y,char *p)//根据文件的后缀名绘图 
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
char* getbkname(char *pix)//获取有后缀的文件的后缀 
{
	if(strcmp(strrchr(pix,'.'),NULL)==0)
	{
		return "file";//没有后缀且不为文件夹 
	} 
	else
	{
		return strrchr(pix,'.');
	}
}
void drfile(char *pv,int i,char *px,char *mv,char *mx)//文件名称，相对坐标，文件属性，时间，大小
{
	drawfile(215,190+16*i,px);//后续加入绘制文件图标函数 (25*16)
	EngText(250,190+16*i,pv,BLACK);
	EngText(720,190+16*i,px,BLACK);
	EngText(420,190+16*i,mv,BLACK);
	EngText(790,190+16*i,mx,BLACK);
}

void inspectdir(char *path)//遍历并绘图 
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
	    strcat(opdt,de->d_name);//此时opdt内是当前正在遍历的子文件的文件路径！
		//
		if(stat(opdt,&filestat)==0)
		{
			miv=ctime(&filestat.st_ctime);//创建日期
			mixl=filestat.st_size;
			sprintf(mixc,"%ld",mixl);//mixc内为大小 
			if(filestat.st_mode&S_IFDIR)
			{
				pix="folder";
			} 
			else
			pix=getbkname(de->d_name);//pix为后缀名
		}
		//
	    drfile(de->d_name,count,pix,miv,mixc);
	    count++;
	    numye=(count/30)+1;//记录页数 ,后续需要处理如何将过多文件分页输出 
	    
	}  
		closedir(dr);  // Close directory  
}  
