#ifndef _ZGUI_H
#define _ZGUI_H

#include <string>
#include "zmatrix/zcore/zcore.h"
#include "zmatrix/zimgproc/zimgproc.h"


namespace z {

Matrix8u imread(char *filename);
void imwrite(char *filename, Matrix8u & img, int quality = 95);

void imshow(const std::string & name, Matrix8u & mat);
void namedWindow(const std::string & name, int flags = 1);
int waitKey(int delay = 0);


// 图形绘制
void lineDDA(Matrix8u & img, Point pt1, Point pt2, const Scalar& color, int thickness = 1);
void line(Matrix8u & img, Point pt1, Point pt2, const Scalar& color, int thickness = 1);
void ellipse(Matrix8u& img, Point center, Size axes, double angle, const Scalar& color, int thickness = 1, int lineType = 8, int shift = 0);
void rectangle(Matrix8u& img, Rect rec, const Scalar& color, int thickness = 1, int lineType = 8, int shift = 0);
void circle(Matrix8u& img, Point center, int radius, const Scalar& color, int thickness = 1, int lineType = 8, int shift = 0);
}

#endif