
// MFCApplication6Dlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CMFCApplication6Dlg
class CMFCApplication6Dlg : public CDialogEx
{
// Создание
public:
	CMFCApplication6Dlg(CWnd* pParent = nullptr);	// стандартный конструктор
	CString fText;

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION6_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	//afx_msg void OnCnSelchangeMfcfontcombo1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	;
	afx_msg void OnEnChangeEdit1();
	CString NAME;
};
