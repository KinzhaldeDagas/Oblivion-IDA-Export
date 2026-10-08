struct _LDR_DDAG_NODE
{
LIST_ENTRY Modules;
LDR_SERVICE_TAG_RECORD *ServiceTagList;
ULONG LoadCount;
ULONG ReferenceCount;
ULONG DependencyCount;
$B235BB5C721129B1CBCD46DABF6FF264 _anon_0;
LDRP_CSLIST IncomingDependencies;
LDR_DDAG_STATE State;
SINGLE_LIST_ENTRY CondenseLink;
ULONG PreorderNumber;
ULONG LowestLink;
};
