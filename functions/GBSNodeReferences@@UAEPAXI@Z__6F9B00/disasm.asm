0x6F9B00: push    esi
0x6F9B01: mov     esi, ecx
0x6F9B03: call    ??1BSNodeReferences@@UAE@XZ; BSNodeReferences::~BSNodeReferences(void)
0x6F9B08: test    byte ptr [esp+4+arg_0], 1
0x6F9B0D: jz      short loc_6F9B18
0x6F9B0F: push    esi
0x6F9B10: call    FormHeapFree
0x6F9B15: add     esp, 4
0x6F9B18: mov     eax, esi
0x6F9B1A: pop     esi
0x6F9B1B: retn    4
