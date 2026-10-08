struct DDEDATA
{
unsigned __int16 unused : 12;
unsigned __int16 fResponse : 1;
unsigned __int16 fRelease : 1;
unsigned __int16 reserved : 1;
unsigned __int16 fAckReq : 1;
__int16 cfFormat;
BYTE Value[1];
};
