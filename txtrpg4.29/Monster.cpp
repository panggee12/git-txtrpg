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
	cout << "직업 : " << m_Info.cName << endl;
	cout << "공격력 : " << m_Info.iAttack << endl;
	cout << " 체력 : " << m_Info.iHp << " / " << m_Info.iMaxHp << endl;
	cout << "=====================================================" << endl;
}

