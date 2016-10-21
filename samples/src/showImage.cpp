#include "zmatrix/zcore/zcore.h"
#include "zmatrix/zgui/zgui.h"


using namespace std;

int main(void)
{
    cv::Mat test = cv::imread("test.jpeg");

    z::Matrix8u zdst, zGussion;
    zGussion = z::Mat2Matrix8u(test);
    if(zGussion.empty()) {
        cout << "打开图片失败！" << endl;
        return -1;
    }

    z::GaussianBlur(zGussion, zdst, z::Size(5, 5));

    cv::imshow("origin", test);
    cv::imshow("filter", cv::Mat(zdst));

    cv::waitKey(0);
    return 0;
}
