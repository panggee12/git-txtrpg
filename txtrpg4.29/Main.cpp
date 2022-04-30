#include "stdafx.h"
#include "Main.h"

CMain::CMain()
{
	m_pPlayer = nullptr;
	m_pField = nullptr;
	m_pStore = nullptr;
}


CMain::~CMain()
{
	Release();
}

void CMain::Initialize()
{
	if (!m_pPlayer)
	{
		m_pPlayer = new CPlayer;
		static_cast<CPlayer*>(m_pPlayer)->selectjob();
	}
	if (!m_pField)
	{
		m_pField = new CField;
		m_pField->set_pPlalyer(m_pPlayer);
	}
	if (!m_pStore)
	{
		m_pStore = new CStore;
		m_pStore->set_pPlalyer(m_pPlayer);
	}
}

void CMain::Update()
{
	int iInput = 0;
	while (g_exit)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "1. 사냥터 2. 상점 3. 종료" << endl;
		cin >> iInput;
		switch (iInput)
		{
		case 1:
			m_pField->Update();
			break;
		case 2:
			m_pStore->Initialize();
			m_pStore->Update();
			break;
		case 3:
			return;
		default:
			continue;
		}
	}
}

void CMain::Release()
{
	SAFE_DELETE(m_pPlayer);
	SAFE_DELETE(m_pStore);
}

