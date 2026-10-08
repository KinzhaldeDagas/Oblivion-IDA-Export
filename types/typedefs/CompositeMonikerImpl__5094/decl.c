struct CompositeMonikerImpl
{
IMoniker_0 IMoniker_iface;
IROTData_0 IROTData_iface;
IMarshal_0 IMarshal_iface;
LONG ref;
IMoniker_0 **tabMoniker;
ULONG tabSize;
ULONG tabLastIndex;
};
