#pragma once
#include "afxdialogex.h"


// rcv dialog

class rcv : public CDialogEx
{
	DECLARE_DYNAMIC(rcv)

public:
	rcv(CWnd* pParent = nullptr);   // standard constructor
	virtual ~rcv();
	virtual BOOL OnInitDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RECEIVE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString FilePath;
	afx_msg void OnBnClickedButton2();
};
