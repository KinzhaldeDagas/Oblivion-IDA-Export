0x412BC0: push    esi
0x412BC1: mov     esi, ecx
0x412BC3: call    ??1MagicItemObject@@UAE@XZ; MagicItemObject::~MagicItemObject(void)
0x412BC8: test    byte ptr [esp+4+arg_0], 1
0x412BCD: jz      short loc_412BD8
0x412BCF: push    esi
0x412BD0: call    FormHeapFree
0x412BD5: add     esp, 4
0x412BD8: mov     eax, esi
0x412BDA: pop     esi
0x412BDB: retn    4
