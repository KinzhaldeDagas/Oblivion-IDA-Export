0x5A6760: push    esi
0x5A6761: mov     esi, ecx
0x5A6763: call    ??1IconArray@@UAE@XZ; IconArray::~IconArray(void)
0x5A6768: test    byte ptr [esp+4+arg_0], 1
0x5A676D: jz      short loc_5A6778
0x5A676F: push    esi
0x5A6770: call    FormHeapFree
0x5A6775: add     esp, 4
0x5A6778: mov     eax, esi
0x5A677A: pop     esi
0x5A677B: retn    4
