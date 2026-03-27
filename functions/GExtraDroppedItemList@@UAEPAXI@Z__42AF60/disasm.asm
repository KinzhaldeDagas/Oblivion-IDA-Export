0x42AF60: push    esi
0x42AF61: mov     esi, ecx
0x42AF63: call    ??1ExtraDroppedItemList@@UAE@XZ; ExtraDroppedItemList::~ExtraDroppedItemList(void)
0x42AF68: test    byte ptr [esp+4+arg_0], 1
0x42AF6D: jz      short loc_42AF78
0x42AF6F: push    esi
0x42AF70: call    FormHeapFree
0x42AF75: add     esp, 4
0x42AF78: mov     eax, esi
0x42AF7A: pop     esi
0x42AF7B: retn    4
