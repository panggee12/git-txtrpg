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
	cout << "���� : " << m_Info.cName << endl;
	cout << "���ݷ� : " << m_Info.iAttack << endl;
	cout << " ü�� : " << m_Info.iHp << " / " << m_Info.iMaxHp << endl;
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


