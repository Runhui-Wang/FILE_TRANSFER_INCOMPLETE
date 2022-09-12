// ssnd.cpp : implementation file
//

#include "pch.h"
#include "FILE_TRANSFER.h"
#include "afxdialogex.h"
#include "ssnd.h"


// ssnd dialog

IMPLEMENT_DYNAMIC(ssnd, CDialogEx)

ssnd::ssnd(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SEND_DIALOG, pParent)
{

}

ssnd::~ssnd()
{
}

BOOL ssnd::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	GetDlgItem(IDC_BUTTON2)->EnableWindow(false);
	GetDlgItem(IDC_BUTTON3)->EnableWindow(false);
	SetDlgItemText(IDC_EDIT3, L"Disconnected");
	return 0;
}

void ssnd::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ssnd, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &ssnd::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &ssnd::OnBnClickedButton2)
END_MESSAGE_MAP()


// ssnd message handlers


void ssnd::OnBnClickedButton1()
{
	CFileDialog dlgFileOpenImg(TRUE, NULL, NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, NULL, NULL);
	if (dlgFileOpenImg.DoModal() == IDOK) {
		filename = dlgFileOpenImg.GetPathName();
		SetDlgItemText(IDC_EDIT2, filename);
		GetDlgItem(IDC_BUTTON2)->EnableWindow(true);
	}
}


void ssnd::OnBnClickedButton2()
{
	SetDlgItemText(IDC_EDIT3, L"Connecting");
}
