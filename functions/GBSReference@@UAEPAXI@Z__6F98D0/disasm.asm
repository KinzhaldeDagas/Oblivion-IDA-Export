0x6F98D0: push    esi
0x6F98D1: mov     esi, ecx
0x6F98D3: call    ??1BSReference@@UAE@XZ; BSReference::~BSReference(void)
0x6F98D8: test    byte ptr [esp+4+arg_0], 1
0x6F98DD: jz      short loc_6F98E8
0x6F98DF: push    esi
0x6F98E0: call    FormHeapFree
0x6F98E5: add     esp, 4
0x6F98E8: mov     eax, esi
0x6F98EA: pop     esi
0x6F98EB: retn    4
