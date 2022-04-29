#pragma once
#include "define.h"
class CObj
{
	
protected:
	tInfo m_Info;
public:
	
	CObj();
		
	~CObj();
	virtual void Render();
	virtual void Input(char * cName, int iHp, int iAttack, int iExp = 0, int iMoney = 0);
	void set_Attacked(int _iAttack) { m_Info.iHp -= _iAttack; }
	tInfo get_Info() { return m_Info; }

};

