#include <iostream>
#include "zcore/zcore.h"
#include "zgui/zgui.h"


using namespace std;
using namespace z;

int main(int argc, char *argv[])
{
	Matrix8u src;
	src = imread((char *)"test.jpeg");

	// 显示彩色图片
	imshow("hello", src);

	waitKey(0);
	return 0;
}


