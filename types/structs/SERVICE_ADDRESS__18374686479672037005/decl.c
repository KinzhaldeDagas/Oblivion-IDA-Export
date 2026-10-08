struct _SERVICE_ADDRESS
{
DWORD dwAddressType;
DWORD dwAddressFlags;
DWORD dwAddressLength;
DWORD dwPrincipalLength;
BYTE *lpAddress;
BYTE *lpPrincipal;
};
