0x41DE10: push    esi
0x41DE11: mov     esi, ecx
0x41DE13: call    ??1ExtraHavok@@UAE@XZ; ExtraHavok::~ExtraHavok(void)
0x41DE18: test    byte ptr [esp+4+arg_0], 1
0x41DE1D: jz      short loc_41DE28
0x41DE1F: push    esi
0x41DE20: call    FormHeapFree
0x41DE25: add     esp, 4
0x41DE28: mov     eax, esi
0x41DE2A: pop     esi
0x41DE2B: retn    4
