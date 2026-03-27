0x658970: push    esi
0x658971: mov     esi, ecx
0x658973: call    ??1MiddleLowProcess@@UAE@XZ; MiddleLowProcess::~MiddleLowProcess(void)
0x658978: test    byte ptr [esp+4+arg_0], 1
0x65897D: jz      short loc_658988
0x65897F: push    esi
0x658980: call    FormHeapFree
0x658985: add     esp, 4
0x658988: mov     eax, esi
0x65898A: pop     esi
0x65898B: retn    4
