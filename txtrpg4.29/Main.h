#pragma once

#include "define.h"
#include "Player.h"
#include "Field.h"
#include "Store.h"
class CMain
{
	CObj* m_pPlayer;
	CField* m_pField;
	CStore* m_pStore;
public:
	void Initialize();
	void Update();
	void Release();
	CMain();
	~CMain();
};

