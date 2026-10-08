struct _HIDP_VALUE_CAPS
{
USAGE UsagePage;
UCHAR ReportID;
BOOLEAN IsAlias;
USHORT BitField;
USHORT LinkCollection;
USAGE LinkUsage;
USAGE LinkUsagePage;
BOOLEAN IsRange;
BOOLEAN IsStringRange;
BOOLEAN IsDesignatorRange;
BOOLEAN IsAbsolute;
BOOLEAN HasNull;
UCHAR Reserved;
USHORT BitSize;
USHORT ReportCount;
USHORT Reserved2[5];
ULONG UnitsExp;
ULONG Units;
LONG LogicalMin;
LONG LogicalMax;
LONG PhysicalMin;
LONG PhysicalMax;
$A5CE44402FDB740F1BCB16A0EAB41A10 _anon_0;
};
