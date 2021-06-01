#ifndef _GAME_H_
#define _GAME_H_

#include<graphics.h>
#include<stdlib.h>
#include<time.h>

#define N 4 //游戏的维数
#define BACK_SIZE 512

enum KEY
{
	UP,     //上
	DOWN,   //下
	LEFT,   //左
	RIGHT,  //右
	EXIT,   //退出
	OTHER   //其他键
};

/*
 * 函数名:initGame
 * 功能:对游戏界面数据进行初始化，并产生两个随机数
 * 参数:需要初始化的游戏数据
 * 返回值:无
*/
void initGame(int data[N][N]);

/*
 * 函数名:getRand
 * 功能:在游戏数据中产生一个随机数，2的概率为80%，4的概率为20%
 * 参数:需要产生随机数的游戏数据
 * 返回值:无
*/
void getRand(int data[N][N]);

/*
 * 函数名:checkGameOver
 * 功能:检查游戏是否结束
 * 参数:需要检查的游戏数据
 * 返回值:游戏结束返回1，没有结束返回0
*/
int checkGameOver(int data[N][N]);

/*
 * 函数名:exitGame
 * 功能:退出游戏
 * 参数:无
 * 返回值:无
 */
void exitGame(void);

/*
 * 函数名:maxScore
 * 功能:获取游戏数据中的最大数
 * 参数:需要查找的游戏数据
 * 返回值:游戏数据中的最大值
*/
int maxScore(int data[N][N]);

/*
 * 函数名:moveUp
 * 功能:把游戏数据上移
 * 参数:需要上移的游戏数据
 * 返回值:无
 */
void moveUp(int data[N][N]);

/*
* 函数名:moveDown
* 功能:把游戏数据下移
* 参数:需要下移的游戏数据
* 返回值:无
*/
void moveDown(int data[N][N]);

/*
* 函数名:moveLeft
* 功能:把游戏数据左移
* 参数:需要左移的游戏数据
* 返回值:无
*/
void moveLeft(int data[N][N]);

/*
* 函数名:moveRight
* 功能:把游戏数据右移
* 参数:需要右移的游戏数据
* 返回值:无
*/
void moveRight(int data[N][N]);

/*
 * 函数名:getInput
 * 功能:获取用户的输入
 * 参数:无
 * 返回值:返回用户输入的按键
*/

int checkGameWin(int maxScore);

#endif
