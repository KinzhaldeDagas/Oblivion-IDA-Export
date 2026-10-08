struct OLECONVERT_OLESTREAM_DATA
{
DWORD dwOleID;
DWORD dwTypeID;
DWORD dwOleTypeNameLength;
CHAR strOleTypeName[255];
CHAR *pstrOleObjFileName __offset(OFF64|AUTO);
DWORD dwOleObjFileNameLength;
DWORD dwMetaFileWidth;
DWORD dwMetaFileHeight;
CHAR strUnknown[8];
DWORD dwDataLength;
BYTE *pData __offset(OFF64|AUTO);
};
