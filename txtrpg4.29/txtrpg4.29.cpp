// txtrpg4.29.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Main.h"

bool g_exit = true;

int main()
{
	CMain Main;
	Main.Initialize();
	Main.Update();
    return 0;
}

