struct _IP_ADAPTER_INFO
{
_IP_ADAPTER_INFO *Next;
DWORD ComboIndex;
char AdapterName[260];
char Description[132];
UINT AddressLength;
BYTE Address[8];
DWORD Index;
UINT Type;
UINT DhcpEnabled;
PIP_ADDR_STRING CurrentIpAddress;
IP_ADDR_STRING IpAddressList;
IP_ADDR_STRING GatewayList;
IP_ADDR_STRING DhcpServer;
BOOL HaveWins;
IP_ADDR_STRING PrimaryWinsServer;
IP_ADDR_STRING SecondaryWinsServer;
time_t LeaseObtained;
time_t LeaseExpires;
};
