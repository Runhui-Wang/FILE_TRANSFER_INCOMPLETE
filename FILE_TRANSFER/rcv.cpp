// rcv.cpp : implementation file
//

#include "pch.h"
#include "FILE_TRANSFER.h"
#include "afxdialogex.h"
#include "rcv.h"


// rcv dialog

IMPLEMENT_DYNAMIC(rcv, CDialogEx)

rcv::rcv(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_RECEIVE_DIALOG, pParent)
{

}

rcv::~rcv()
{
}

BOOL rcv::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	GetDlgItem(IDC_BUTTON2)->EnableWindow(false);
    SetDlgItemText(IDC_EDIT3,L"Disconnected");
	return 0;
}

void rcv::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(rcv, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &rcv::OnBnClickedButton1)
    ON_BN_CLICKED(IDC_BUTTON2, &rcv::OnBnClickedButton2)
END_MESSAGE_MAP()


// rcv message handlers


void rcv::OnBnClickedButton1()
{
    CString FilePath;
    //Open File
    TCHAR szPath[_MAX_PATH];
    BROWSEINFO bi;
    bi.hwndOwner = GetSafeHwnd();
    bi.pidlRoot = NULL;
    bi.lpszTitle = L"Select Path";
    bi.pszDisplayName = szPath;
    bi.ulFlags = BIF_RETURNONLYFSDIRS;
    bi.lpfn = NULL;
    bi.lParam = NULL;

    LPITEMIDLIST pItemIDList = SHBrowseForFolder(&bi);

    if (pItemIDList)
    {
        if (SHGetPathFromIDList(pItemIDList, szPath))
        {
            FilePath = szPath;
            SetDlgItemText(IDC_EDIT2, FilePath);
            GetDlgItem(IDC_BUTTON2)->EnableWindow(true);

        }

     
    }

}


void rcv::OnBnClickedButton2()
{
    SetDlgItemText(IDC_EDIT3, L"Connecting");
}
