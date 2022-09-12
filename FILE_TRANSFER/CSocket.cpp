#include "pch.h"
#include "CSocket.h"
#include "rcv.h"
#include "resource.h"
CSocket::CSocket(void* pclass)
{
	this->pClass = pclass;
	//³õÊ¼»¯lib¿â
	if (WSAStartup(MAKEWORD(2, 2), &wsadata)) {
		delete this;
	}
}

CSocket::~CSocket()
{
	closesocket(Client);
	closesocket(Server);
	WSACleanup();
}

BOOL CSocket::GetLocalIp()
{
	rcv* WinSrever = (rcv*)pClass;
	char name[64];
	int nRet = gethostname(name, sizeof(name));
	if (!nRet) {
		host = gethostbyname(name);
	}
	IP = inet_ntoa(*(in_addr*)host->h_addr);
	WinSrever->SetDlgItemTextW(IDC_IPADDRESS1, IP);
	return true;
}

BOOL CSocket::CreateServer()
{
	Server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (Server == INVALID_SOCKET) {
		delete this;
		return false;
	}
	return true;
}

BOOL CSocket::BindLocal()
{
	
	return true;
}

BOOL CSocket::LisenClient()
{

	return true;
}

void CSocket::RecvData()
{
	


}
