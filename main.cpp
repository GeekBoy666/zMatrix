#include <iostream>
#include "zcore/zcore.h"
#include "zgui/zgui.h"


using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
	z::Matrix test(8, 16);
    test = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
            1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0,
            2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1,
            3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2,
            4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2, 3,
            5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2, 3, 4,
            6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5,
            7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6};

    // 输出测试数据
    cout << "Test Matrix is :\n"<<endl<<test<<endl;

    cv::Mat mat = test;
    z::Matrix dft_test = test.clone();
    z::Matrix dft_dst, idft_dst;

    // 普通离散傅里叶变换
    z::dft(dft_test, dft_dst);
    cout << "z_dft = " << endl << dft_dst << endl;

    z::idft(dft_dst, idft_dst);
    cout << "z_idft = " << endl << idft_dst << endl;

    // 快速傅里叶变换
    z::Matrix dst;
    z::fft(test, dst);
    cout << "z_fft = " << endl <<dst << endl;


    // 使用openCV进行结果检验，浮点数计算结果会有一些差别
    int m = cv::getOptimalDFTSize(mat.rows);
    int n = cv::getOptimalDFTSize(mat.cols);

    Mat padded;
    copyMakeBorder(mat, padded, 0, m - mat.rows, 0, n - mat.cols, cv::BORDER_CONSTANT, cv::Scalar::all(0));
    Mat plannes[] = {Mat_<double>(padded), Mat::zeros(padded.size(), CV_64F) };

    Mat complexI;
    merge(plannes, 2, complexI);

    dft(complexI, complexI);

    cout << "cv_fft = "<< endl << complexI << endl;


	return 0;
}


