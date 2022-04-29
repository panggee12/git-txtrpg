#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer()
{
}


CPlayer::~CPlayer()
{
}
void CPlayer::Input(char * cName, int iHp, int iAttack, int iExp, int iMoney)
{
	strcpy_s(m_Info.cName, cName);
	m_Info.iAttack = iAttack;
	m_Info.iHp = iHp;
	m_Info.iMaxHp = iHp;
	m_Info.iExp = iExp;
	m_Info.iMaxExp = 100;
	m_Info.iMoney = iMoney;
	m_Info.iLv = 1;
}

void CPlayer::selectjob()
{
	int iInput = 0;
	cout << "1. 전사 2. 마법사 3. 도적 4. 종료" << endl;
	cin >> iInput;
	switch (iInput)
	{
	case 1:
		Input("전사", 200, 10);
		break;
	case 2:
		Input("마법사", 100, 30);
		break;
	case 3:
		Input("도적", 150, 20);
		break;
	case 4:
		return;
	}
}

void CPlayer::Render()
{
	
	cout << "직업 : " << m_Info.cName << endl;
	cout << "공격력 : " << m_Info.iAttack << endl;
	cout << " 체력 : " << m_Info.iHp << " / " << m_Info.iMaxHp << endl;
	cout << "레벨 : " << m_Info.iLv << " ( " << m_Info.iExp << " / " << m_Info.iMaxExp << " )" << endl;
	cout << "소지금 : " << m_Info.iMoney << endl;
	cout << "=====================================================" << endl;
	
}

void CPlayer::set_win(int iExp, int iMoney)
{
	m_Info.iExp += iExp;
	m_Info.iMoney += iMoney;
	if (m_Info.iExp >= m_Info.iMaxExp)
	{
		++m_Info.iLv;
		m_Info.iMaxHp += 50;
		m_Info.iHp = m_Info.iMaxHp;
		m_Info.iExp -= m_Info.iMaxExp;
		m_Info.iMaxExp += 100;
		m_Info.iAttack += 10;

	}
}

