#pragma once
#include "Obj.h"
class CPlayer:public CObj
{
public:
	void selectjob();
	void Render();
	void set_win(int iExp, int iMoney);
	void set_hp() { m_Info.iHp = m_Info.iMaxHp; }
	void Input(char * cName, int iHp, int iAttack, int iExp=0, int iMoney=0);
	void Buy_Item(int _iMoney) { m_Info.iMoney -= _iMoney; }
	CPlayer();
	~CPlayer();
};

