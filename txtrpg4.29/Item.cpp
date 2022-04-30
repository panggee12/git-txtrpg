#include "stdafx.h"
#include "Item.h"




CItem::CItem()
{
}
//CItem::CItem(char * cName, int iHp, int iAttack, int iMoney)
//{
//	strcpy_s(m_Info.cName, cName);
//	m_Info.iHp = iHp;
//	m_Info.iAttack = iAttack;
//	m_Info.iMoney = iMoney;
//}

CItem::~CItem()
{
}
void CItem::Render()
{
	cout << "이름 : " << m_Info.cName << endl;
	cout << "공격력 : " << m_Info.iAttack << endl;
	cout << "체력 : " << m_Info.iHp << endl;
	cout << "가격 : " << m_Info.iMoney << endl;
	cout << "=====================================================" << endl;
}
void CItem::Input(char * cName, int iHp, int iAttack, int iMoney)
{

	strcpy_s(m_Info.cName, cName);
	m_Info.iHp = iHp;
	m_Info.iAttack = iAttack;
	m_Info.iMoney = iMoney;

}