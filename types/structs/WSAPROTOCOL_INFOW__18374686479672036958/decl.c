struct _WSAPROTOCOL_INFOW
{
DWORD dwServiceFlags1;
DWORD dwServiceFlags2;
DWORD dwServiceFlags3;
DWORD dwServiceFlags4;
DWORD dwProviderFlags;
GUID ProviderId;
DWORD dwCatalogEntryId;
WSAPROTOCOLCHAIN ProtocolChain;
int iVersion;
int iAddressFamily;
int iMaxSockAddr;
int iMinSockAddr;
int iSocketType;
int iProtocol;
int iProtocolMaxOffset;
int iNetworkByteOrder;
int iSecurityScheme;
DWORD dwMessageSize;
DWORD dwProviderReserved;
WCHAR_0 szProtocol[256];
};
