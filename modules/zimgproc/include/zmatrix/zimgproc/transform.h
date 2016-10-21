/**
 ******************************************************************************
 * @file    transform.h
 * @author  zlq
 * @version V1.0
 * @date    2016.9.14
 * @brief   图像变换的函数定义
 ******************************************************************************
 * @attention
 *
 *
 ******************************************************************************
 */
#ifndef _TRANSFORM_H
#define _TRANSFORM_H


#include "zmatrix/zcore/zcore.h"
#include "zimgproc.h"
#include "zmatrix/zmatch/zmatch.h"

#define RAD2ANG			((double)(57.296))

#ifdef __cplusplus
namespace z {

void prewitt(Matrix8u&src, Matrix8u&dst);
void sobel(Matrix8u&src, Matrix8u&dst, int dx = 1, int dy = 1, int ksize = 3);
void Canny(Matrix8u&src, Matrix8u&dst, double threshold1, double threshold2, int apertureSize = 3);

}


#endif

#include "transform.hpp"

#endif // !_TRANSFORM_H
