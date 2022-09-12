#pragma once

class CSocket
{
public:
	CSocket(void* pclass);
	~CSocket();

	//Display local IP
	BOOL GetLocalIp();
	//Server Set up
	BOOL CreateServer();
	//Bind Local IP and Port
	BOOL BindLocal();
	//Listen to Connection
	BOOL LisenClient();
	//Receive Data
	void RecvData();

private:

	CString IP;
	void* pClass;
	WSADATA wsadata;
	hostent* host;
	SOCKET Server, Client;
	SOCKADDR_IN Saddr, Caddr;
	char buffData[1024 * 500];
	CString FileName;
	long long FileLength;
	FILE* pf;
};

