#pragma once
#include "Obj.h"

class CItem :public CObj
{
public:
	void Render();
	void Input(char * cName, int iHp, int iAttack, int iMoney);
	
	CItem();
	//CItem(char * cName, int iHp, int iAttack, int iMoney);
	~CItem();
};

