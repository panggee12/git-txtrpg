#pragma once

#include "stdafx.h"

#define SAFE_DELETE(p) if(p) {delete p; p=nullptr;}

#define PURE    = 0

extern	bool g_exit;

struct tInfo
{
	char cName[20];
	int iHp;
	int iMaxHp;
	int iExp;
	int iMaxExp;
	int iLv;
	int iAttack;
	int iMoney;

};

enum Combat
{
	Combat_fight = 1,
	Combat_run,
	Combat_die,
	Combat_win
};
enum ITEMTYPE
{
	ITEM_SWORD=1,
	ITEM_ARMOR,
	ITEM_END
};
enum ITEMLV
{
	LEVEL_1=1,
	LEVEL_2,
	LEVEL_3,
	LEVEL_END
};