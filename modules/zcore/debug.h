/**
 ******************************************************************************
 * @file    debug.h
 * @author  zlq
 * @version V1.0
 * @date    2016.9.17
 * @brief   调试程序使用
 ******************************************************************************
 */
#ifndef _DEBUG_H
#define _DEBUG_H


#include <Windows.h>
#include <iostream>
#include "black.h"
#include "config.h"

/**
 * @brief 打印需要的调试信息
 */
#if defined(_DEBUG)
#define _log_(str) st(std::cout<<"[" << __FILE__ << "]" << "<" << __func__ << ">" << "(" << __LINE__ << ") : " << str << std::endl;)
#else
#define _log_(str) ((void)0)
#endif

#define Z_Error(str) st(std::cout<<"Error: [" << __FILE__ << "]" << "<" << __func__ << ">" << "(" << __LINE__ << ") : " << str << std::endl;)


/**
 * @brief 时间戳，测试一段代码的运行时间，单位是ms
 */
class TimeStamp {
public:
	/**
	 * @brief 测试开始的地方
	 */
	void start() { GetLocalTime(&starttime); }

	/**
	 * @brief 测试结束的地方，并打印从start()开始运行的时间差
	 */
	int runtime()
	{
		GetLocalTime(&endtime);

		auto diff = endtime.wMilliseconds - starttime.wMilliseconds;
		diff += (endtime.wSecond - starttime.wSecond) * 1000;
		diff += (endtime.wMinute - starttime.wMinute) * 60000;

        return  diff;
	}
private:
	SYSTEMTIME starttime, endtime;
};


#endif // !_DEBUG_H

