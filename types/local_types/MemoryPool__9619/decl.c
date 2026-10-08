struct MemoryPool
{
char m_name[64];
void *field_040;
FreeEntry *freeList;
UInt32 unk_048[14];
CRITICAL_SECTION critSection;
UInt32 unk_098[26];
UInt32 field_100;
UInt32 field_104;
UInt16 *field_108;
UInt32 field_10C;
UInt32 field_110;
UInt32 field_114;
UInt32 field_118;
};
