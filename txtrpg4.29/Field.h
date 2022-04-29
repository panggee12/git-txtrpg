#pragma once
#include "Player.h"
#include "Monster.h"
class CField
{
	CObj* m_pPlayer;
	CObj* m_pMonster;
public:
	void Initiaize();
	void Update();
	Combat fight();
	void Release();
	void set_pPlalyer(CObj* _m_pPLayer) {m_pPlayer = _m_pPLayer;}
	CField();
	~CField();
};

