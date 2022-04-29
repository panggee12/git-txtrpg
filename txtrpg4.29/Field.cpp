#include "stdafx.h"
#include "Field.h"

CField::CField()
	:m_pPlayer(nullptr), m_pMonster(nullptr)
{
	Initiaize();
}


CField::~CField()
{
	Release();
}
void CField::Initiaize()
{
	if (!m_pMonster)
		m_pMonster = new CMonster;
}

void CField::Update()
{
	int iInput = 0;
	while (1)
	{
		system("cls");
		static_cast<CPlayer*>(m_pPlayer)->Render();
		cout << "1. 초급 2. 중급 3. 고급 4. 종료" << endl;
		cin >> iInput;
		switch (iInput)
		{
		case 1:
			m_pMonster->Input("초급", 30, 10, 15,20);
			break;
		case 2:
			m_pMonster->Input("중급", 60, 20, 45,40);
			break;
		case 3:
			m_pMonster->Input("고급",90, 30, 95,70);
			break;
		case 4:
			return;
		default:
			continue;
		}
		switch (fight())
		{
		case Combat_win:
			static_cast<CPlayer*>(m_pPlayer)->set_win(m_pMonster->get_Info().iExp, m_pMonster->get_Info().iMoney);
			break;
		case Combat_die:
			static_cast<CPlayer*>(m_pPlayer)->set_hp();
			break;
		case Combat_run:
			break;
		}
	}
}

Combat CField::fight()
{
	int iInput = 0;
	while (1)
	{
		system("cls");
		m_pPlayer->Render();
		m_pMonster->Render();
		cout << "1. 전투 2. 도망" << endl;
		cin >> iInput;
		switch(iInput)
		{
		case 1:
			m_pMonster->set_Attacked(m_pPlayer->get_Info().iAttack);
			m_pPlayer->set_Attacked(m_pMonster->get_Info().iAttack);
			if (m_pPlayer->get_Info().iHp <= 0)
				return Combat_die;
			else if (m_pMonster->get_Info().iHp <= 0)
				return Combat_win;
			break;
		case 2:
			return Combat_run;
		}
	}
}

void CField::Release()
{
	SAFE_DELETE(m_pMonster);
}


