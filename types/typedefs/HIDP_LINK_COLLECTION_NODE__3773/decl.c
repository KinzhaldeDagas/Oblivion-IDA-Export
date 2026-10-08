struct _HIDP_LINK_COLLECTION_NODE
{
USAGE LinkUsage;
USAGE LinkUsagePage;
USHORT Parent;
USHORT NumberOfChildren;
USHORT NextSibling;
USHORT FirstChild;
unsigned __int32 CollectionType : 8;
unsigned __int32 IsAlias : 1;
unsigned __int32 Reserved : 23;
PVOID UserContext;
};
