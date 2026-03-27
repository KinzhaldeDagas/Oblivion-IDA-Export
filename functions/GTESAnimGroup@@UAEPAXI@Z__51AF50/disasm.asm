0x51AF50: push    esi
0x51AF51: mov     esi, ecx
0x51AF53: call    ??1TESAnimGroup@@UAE@XZ; TESAnimGroup::~TESAnimGroup(void)
0x51AF58: test    byte ptr [esp+4+arg_0], 1
0x51AF5D: jz      short loc_51AF68
0x51AF5F: push    esi
0x51AF60: call    FormHeapFree
0x51AF65: add     esp, 4
0x51AF68: mov     eax, esi
0x51AF6A: pop     esi
0x51AF6B: retn    4
