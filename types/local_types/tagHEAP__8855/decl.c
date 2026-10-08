struct tagHEAP
{
DWORD_PTR unknown1[2];
DWORD unknown2[2];
DWORD_PTR unknown3[4];
DWORD unknown4;
__declspec(align(8)) DWORD_PTR unknown5[2];
DWORD unknown6[3];
__declspec(align(8)) DWORD_PTR unknown7[2];
DWORD flags;
DWORD force_flags;
SUBHEAP subheap;
list entry;
list subheap_list;
list large_list;
SIZE_T grow_size;
DWORD magic;
DWORD pending_pos;
ARENA_INUSE **pending_free;
RTL_CRITICAL_SECTION critSection;
list *freeList;
wine_rb_tree freeTree;
DWORD freeMask[4];
int extended_type;
};
