#include "page.h"

int main() {
    _init();
   /*Picture(286,0,"elysia.bmp");
    EngText(240,480,"L   O   A   D   I   N   G  .  .  .  .  .  .",BLUE);
	EngText(240,540,"W A I T I N G    M A K E S    P E R F C T   !",WHITE);
	delay(4000);*/
	delay(1000) ;
    hello_msg = "欢迎使用！";
    paint(4);//完成编写后改回page（1）
//	side_inspectdir(); 
	inspectdir("C:\\DATA");
    while (true) {
        _update();
        delay(10);
    }
    return 0;
}
