/**
 ******************************************************************************
 * @file    debug.h
 * @author  zlq
 * @version V1.0
 * @date    2016.9.17
 * @brief   调试程序使用
 ******************************************************************************
 */
#include <iostream>
#include "black.h"

#ifndef _DEBUG_H
#define _DEBUG_H



// 是否输出自定义的DEBUG信息
//#define DEBUG

/**
 * @berif 打印需要的调试信息
 */
#if defined(DEBUG)
#define _log_(str) st(std::cout<<"[" << __FILE__ << "]" << "<" << __func__ << ">" << "(" << __LINE__ << ") : " << str << std::endl;)
#else
#define _log_(str)   
#endif

#endif // !_DEBUG_H

