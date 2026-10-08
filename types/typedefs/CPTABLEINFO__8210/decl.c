struct _CPTABLEINFO
{
USHORT CodePage;
USHORT MaximumCharacterSize;
USHORT DefaultChar;
USHORT UniDefaultChar;
USHORT TransDefaultChar;
USHORT TransUniDefaultChar;
USHORT DBCSCodePage;
UCHAR LeadByte[12];
USHORT *MultiByteTable;
void *WideCharTable;
USHORT *DBCSRanges;
USHORT *DBCSOffsets;
};
