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
	cout << "�̸� : " << m_Info.cName << endl;
	cout << "���ݷ� : " << m_Info.iAttack << endl;
	cout << "ü�� : " << m_Info.iHp << endl;
	cout << "���� : " << m_Info.iMoney << endl;
	cout << "=====================================================" << endl;
}
void CItem::Input(char * cName, int iHp, int iAttack, int iMoney)
{

	strcpy_s(m_Info.cName, cName);
	m_Info.iHp = iHp;
	m_Info.iAttack = iAttack;
	m_Info.iMoney = iMoney;

}