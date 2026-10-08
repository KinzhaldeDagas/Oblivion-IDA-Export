struct tagProxyFileInfo_0
{
const PCInterfaceProxyVtblList_0 *pProxyVtblList;
const PCInterfaceStubVtblList *pStubVtblList;
const PCInterfaceName *pNamesArray;
const IID **pDelegatedIIDs;
const PIIDLookup pIIDLookupRtn;
unsigned __int16 TableSize;
unsigned __int16 TableVersion;
const IID **pAsyncIIDLookup;
LONG_PTR Filler2;
LONG_PTR Filler3;
LONG_PTR Filler4;
};
