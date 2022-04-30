#include "stdafx.h"
#include "Store.h"

CStore::CStore()
{
	m_pPlayer = nullptr;
	memset(m_pItem, 0, sizeof(m_pItem));
	
}

CStore::~CStore()
{
	Release();
}

void CStore::Initialize()
{
	CObj* temp = new CItem();
	static_cast<CItem*>(temp)->Input("�ʱް�", 0, 10, 20);
	m_pItem[ITEM_SWORD][LEVEL_1] = temp;
	temp = new CItem();
	static_cast<CItem*>(temp)->Input("�߱ް�", 0, 10, 40);
	m_pItem[ITEM_SWORD][LEVEL_2] = temp;
	temp = new CItem();
	static_cast<CItem*>(temp)->Input("��ް�", 0, 10, 60);
	m_pItem[ITEM_SWORD][LEVEL_3] = temp;
	temp = new CItem();
	static_cast<CItem*>(temp)->Input("�ʱ޿�", 0, 10, 20);
	m_pItem[ITEM_ARMOR][LEVEL_1] = temp;
	temp = new CItem();
	static_cast<CItem*>(temp)->Input("�߱޿�", 0, 10, 40);
	m_pItem[ITEM_ARMOR][LEVEL_2] = temp;
	temp = new CItem();
	static_cast<CItem*>(temp)->Input("��޿�", 0, 10, 60);
	m_pItem[ITEM_ARMOR][LEVEL_3] = temp;
}

void CStore::Update(void)
{
	int		iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();

		cout << "1. ���� ���� 2. �� ���� 3. �� �ܰ� : ";
		cin >> iInput;

		switch (iInput)
		{
		case 1:
			Render(ITEM_SWORD);
			break;

		case 2:
			Render(ITEM_ARMOR);
			break;

		case 3:
			return;

		default:
			continue;
		}
	}

}

void CStore::Render(ITEMTYPE eType)
{
	int		iInput = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();

		for (int i = 1; i < LEVEL_END; ++i)
		{
			cout << i << ". " << endl;
			m_pItem[eType][i]->Render();
		}

		cout << "������ �������� �����ϼ���(4. �� �ܰ�) : ";
		cin >> iInput;

		if (4 == iInput)
			return;

		else if (3 >= iInput)
		{
			Buy_Item(m_pItem[eType][iInput]);
		}
	}

}

void CStore::Release(void)
{
	for (int i = 1; i < ITEM_END; ++i)
	{
		for (int j = 1; j < LEVEL_END; ++j)
		{
			SAFE_DELETE(m_pItem[i][j]);
		}
	}

}

void CStore::Buy_Item(CObj* pItem)
{
	if (m_pPlayer->get_Info().iMoney >= pItem->get_Info().iMoney)
	{
		cout << "���� ����" << endl;
		dynamic_cast<CPlayer*>(m_pPlayer)->Buy_Item(pItem->get_Info().iMoney);
	}
	else
	{
		cout << "�ܾ��� �����մϴ�" << endl;
	}

	system("pause");
}
