// Text.cpp: файл реализации
//

#include "stdafx.h"
#include "MFCApplication6.h"
#include "Text.h"
#include "afxdialogex.h"


// Диалоговое окно Text

IMPLEMENT_DYNAMIC(Text, CDialogEx)

Text::Text(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION6_DIALOG, pParent)
{

}

Text::~Text()
{
}

void Text::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Text, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений Text
