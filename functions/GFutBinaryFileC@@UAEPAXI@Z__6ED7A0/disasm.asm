0x6ED7A0: push    esi
0x6ED7A1: mov     esi, ecx
0x6ED7A3: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6ED7A8: test    byte ptr [esp+4+arg_0], 1
0x6ED7AD: jz      short loc_6ED7B8
0x6ED7AF: push    esi
0x6ED7B0: call    FormHeapFree
0x6ED7B5: add     esp, 4
0x6ED7B8: mov     eax, esi
0x6ED7BA: pop     esi
0x6ED7BB: retn    4
