#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

//#include <easyx.h>
#include <stdio.h>//利用easyx 完成扫雷
#include <graphics.h>//包含图形库头文件
//只支持c++文件  后缀为cpp
int main()
{
	initgraph(640,480);//创建一个窗口
	circle(50,50,50);//边框空员
	fillcircle(100, 100, 100);//有边框填充圆
	solidcircle(500, 500, 500);//无边框填充圆

	 

	system("pause");
	//关闭窗口  无惨
	closegraph();
	
	return 0;
}