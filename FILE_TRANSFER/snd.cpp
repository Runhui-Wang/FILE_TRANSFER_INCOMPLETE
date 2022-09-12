// send.cpp : implementation file
//

#include "pch.h"
#include "FILE_TRANSFER.h"
#include "afxdialogex.h"
#include "send.h"


// send dialog

IMPLEMENT_DYNAMIC(send, CDialogEx)

send::send(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SEND_DIALOG, pParent)
{

}

send::~send()
{
}

BOOL send::OnInitDialog()
{
	return 0;
}

void send::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(send, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON3, &send::OnBnClickedButton3)
END_MESSAGE_MAP()


// send message handlers


void send::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
}
