0x7A3920: push    esi
0x7A3921: mov     esi, ecx
0x7A3923: call    ??1CTreeEngine@@UAE@XZ; CTreeEngine::~CTreeEngine(void)
0x7A3928: test    byte ptr [esp+4+arg_0], 1
0x7A392D: jz      short loc_7A3938
0x7A392F: push    esi
0x7A3930: call    FormHeapFree
0x7A3935: add     esp, 4
0x7A3938: mov     eax, esi
0x7A393A: pop     esi
0x7A393B: retn    4
