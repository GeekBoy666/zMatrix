#include "zmatrix/zcore/zcore.h"
#include "zmatrix/zgui/zgui.h"

using namespace std;
using namespace z;

int main(void)
{
    Matrix8u test = imread((char *)"test.jpeg");

    cv::Mat img = test;
    cv::imshow("test", img);

    imshow("hello", test);

    waitKey(0);
    return 0;
}
