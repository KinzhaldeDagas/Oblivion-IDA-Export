struct EnumMonikerImpl
{
IEnumMoniker_0 IEnumMoniker_iface;
LONG ref;
IMoniker_0 **tabMoniker;
ULONG tabSize;
ULONG currentPos;
};
