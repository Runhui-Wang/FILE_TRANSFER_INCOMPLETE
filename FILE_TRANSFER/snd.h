#pragma once
#include "afxdialogex.h"


// send dialog

class send : public CDialogEx
{
	DECLARE_DYNAMIC(send)

public:
	send(CWnd* pParent = nullptr);   // standard constructor
	virtual ~send();
	virtual BOOL OnInitDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SEND_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
};
