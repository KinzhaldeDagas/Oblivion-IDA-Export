struct _MIB_IFROW
{
WCHAR_0 wszName[256];
DWORD dwIndex;
DWORD dwType;
DWORD dwMtu;
DWORD dwSpeed;
DWORD dwPhysAddrLen;
UCHAR bPhysAddr[8];
DWORD dwAdminStatus;
INTERNAL_IF_OPER_STATUS dwOperStatus;
DWORD dwLastChange;
DWORD dwInOctets;
DWORD dwInUcastPkts;
DWORD dwInNUcastPkts;
DWORD dwInDiscards;
DWORD dwInErrors;
DWORD dwInUnknownProtos;
DWORD dwOutOctets;
DWORD dwOutUcastPkts;
DWORD dwOutNUcastPkts;
DWORD dwOutDiscards;
DWORD dwOutErrors;
DWORD dwOutQLen;
DWORD dwDescrLen;
BYTE bDescr[256];
};
