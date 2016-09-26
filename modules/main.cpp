#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>
#include <ctime>  

#include "zcore/zcore.h"
#include "zmatch/zmatch.h"
#include "zimgproc/zimgproc.h"
#include "zimgproc/transform.h"
#include "zgui/zgui.h"
#include "test/debug.h"

using namespace std;
using namespace z;

int main(int argc, char *argv[])
{
	cv::Mat img = cv::imread("test.jpeg");

	// 显示彩色图片
	cv::imshow("hello", img);

	cv::waitKey(0);
	return 0;
}


