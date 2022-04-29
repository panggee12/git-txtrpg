#pragma once
#include "define.h"
#include "Player.h"
#include "Item.h"
class CStore
{
	CObj* m_pPlayer;
	CObj* m_pItem[ITEM_END][LEVEL_END];
public:
	void Initialize();
	void Update();
	void Release();
	void set_pPlalyer(CObj* _m_pPLayer) { m_pPlayer = _m_pPLayer; }
	void Render(ITEMTYPE eType);
	void Buy_Item(CObj* pItem);
	CStore();
	~CStore();
};

