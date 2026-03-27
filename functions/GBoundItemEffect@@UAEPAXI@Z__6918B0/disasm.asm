0x6918B0: push    esi
0x6918B1: mov     esi, ecx
0x6918B3: call    ??1BoundItemEffect@@UAE@XZ; BoundItemEffect::~BoundItemEffect(void)
0x6918B8: test    byte ptr [esp+4+arg_0], 1
0x6918BD: jz      short loc_6918C8
0x6918BF: push    esi
0x6918C0: call    FormHeapFree
0x6918C5: add     esp, 4
0x6918C8: mov     eax, esi
0x6918CA: pop     esi
0x6918CB: retn    4
