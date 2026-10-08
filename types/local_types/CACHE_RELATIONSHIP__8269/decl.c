struct _CACHE_RELATIONSHIP
{
BYTE Level;
BYTE Associativity;
WORD LineSize;
DWORD CacheSize;
PROCESSOR_CACHE_TYPE Type;
BYTE Reserved[20];
GROUP_AFFINITY GroupMask;
};
