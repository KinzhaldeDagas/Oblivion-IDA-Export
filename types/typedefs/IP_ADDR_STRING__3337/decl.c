struct __declspec(align(8)) _IP_ADDR_STRING
{
_IP_ADDR_STRING *Next;
IP_ADDRESS_STRING IpAddress;
IP_MASK_STRING IpMask;
DWORD Context;
};
