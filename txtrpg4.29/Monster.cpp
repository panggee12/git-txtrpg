#include "stdafx.h"
#include "Monster.h"


CMonster::CMonster()
{
}

CMonster::~CMonster()
{
}
void CMonster::Render()
{
	cout << "���� : " << m_Info.cName << endl;
	cout << "���ݷ� : " << m_Info.iAttack << endl;
	cout << " ü�� : " << m_Info.iHp << " / " << m_Info.iMaxHp << endl;
	cout << "=====================================================" << endl;
}

