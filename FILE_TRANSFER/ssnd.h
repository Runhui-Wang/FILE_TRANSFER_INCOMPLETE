#pragma once
#include "afxdialogex.h"


// ssnd dialog

class ssnd : public CDialogEx
{
	DECLARE_DYNAMIC(ssnd)

public:
	ssnd(CWnd* pParent = nullptr);   // standard constructor
	virtual ~ssnd();

	virtual BOOL OnInitDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SEND_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString filename;
	afx_msg void OnBnClickedButton2();
};
