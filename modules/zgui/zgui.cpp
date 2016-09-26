#include "zgui.h"
#include "../zimgproc/zimgproc.h"

namespace z{

/**
 * @berif 自己实现的读取jpeg的图片
 * @attention 本函数暂时只能读取jpeg标准的图片，需要读取其他类型的图片请使用openCV的imread函数
 */
Matrix8u imread(char *filename)
{
	Matrix8u temp;
	//read_JPEG_file(filename, temp);
	return temp;
}

void imwrite(char *filename, Matrix8u & img, int quality)
{
	Matrix8u rgbimg;
	cvtColor(img, rgbimg, BGR2RGB);

	//write_JPEG_file(filename, rgbimg, quality);
}



void lineDDA(Matrix8u & img, Point pt1, Point pt2, const Scalar& color, int thickness)
{
	float x = pt1.x, y = pt1.y;
	int dx = pt2.x - pt1.x;
	int dy = pt2.y - pt1.y;
	float steps = 0, xi, yi;

	if (abs(dx) > abs(dy))
		steps = abs(dx);
	else
		steps = abs(dy);

	xi = dx / steps;
	yi = dy / steps;

	for (int i = 0; i < steps;++i) {
		for (int k = 0; k < img.chs; ++k) {
			img.ptr(x, y)[img.chs - k - 1] = color.v[k];
		}
		x += xi;
		y += yi;
	}
}

void line(Matrix8u & img, Point pt1, Point pt2, const Scalar& color, int thickness)
{
	lineDDA(img, pt1, pt2, color, thickness);
}

}



