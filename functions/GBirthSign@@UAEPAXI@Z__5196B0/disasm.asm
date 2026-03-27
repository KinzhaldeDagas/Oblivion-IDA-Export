0x5196B0: push    esi
0x5196B1: mov     esi, ecx
0x5196B3: call    ??1BirthSign@@UAE@XZ; BirthSign::~BirthSign(void)
0x5196B8: test    byte ptr [esp+4+arg_0], 1
0x5196BD: jz      short loc_5196C8
0x5196BF: push    esi
0x5196C0: call    FormHeapFree
0x5196C5: add     esp, 4
0x5196C8: mov     eax, esi
0x5196CA: pop     esi
0x5196CB: retn    4
