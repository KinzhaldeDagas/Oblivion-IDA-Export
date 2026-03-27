0x532C60: push    esi
0x532C61: mov     esi, ecx
0x532C63: call    ??1bhkEntity@@UAE@XZ; bhkEntity::~bhkEntity(void)
0x532C68: test    byte ptr [esp+4+arg_0], 1
0x532C6D: jz      short loc_532C78
0x532C6F: push    esi
0x532C70: call    FormHeapFree
0x532C75: add     esp, 4
0x532C78: mov     eax, esi
0x532C7A: pop     esi
0x532C7B: retn    4
