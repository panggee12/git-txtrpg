#include "stdafx.h"
#include "Obj.h"


CObj::CObj()
{
}

CObj::~CObj()
{
}

void CObj::Render()
{
	cout << "직업 : " << m_Info.cName << endl;
	cout << "공격력 : " << m_Info.iAttack << endl;
	cout << " 체력 : " << m_Info.iHp << " / " << m_Info.iMaxHp << endl;
	cout << "=====================================================" << endl;
}

void CObj::Input(char * cName, int iHp, int iAttack, int iExp, int iMoney)
{
	strcpy_s(m_Info.cName, cName);
	m_Info.iAttack = iAttack;
	m_Info.iHp = iHp;
	m_Info.iMaxHp = iHp;
	m_Info.iExp = iExp;
	m_Info.iMoney = iMoney;
}


