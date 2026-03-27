0x4B6CB0: push    esi
0x4B6CB1: mov     esi, ecx
0x4B6CB3: call    ??1TESObjectCONT@@UAE@XZ; TESObjectCONT::~TESObjectCONT(void)
0x4B6CB8: test    byte ptr [esp+4+arg_0], 1
0x4B6CBD: jz      short loc_4B6CC8
0x4B6CBF: push    esi
0x4B6CC0: call    FormHeapFree
0x4B6CC5: add     esp, 4
0x4B6CC8: mov     eax, esi
0x4B6CCA: pop     esi
0x4B6CCB: retn    4
