0x5411A0: push    esi
0x5411A1: mov     esi, ecx
0x5411A3: call    ??1Sky@@UAE@XZ; Sky::~Sky(void)
0x5411A8: test    byte ptr [esp+4+arg_0], 1
0x5411AD: jz      short loc_5411B8
0x5411AF: push    esi
0x5411B0: call    FormHeapFree
0x5411B5: add     esp, 4
0x5411B8: mov     eax, esi
0x5411BA: pop     esi
0x5411BB: retn    4
