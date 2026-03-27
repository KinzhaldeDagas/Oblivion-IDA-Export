0x4B20B0: push    esi
0x4B20B1: mov     esi, ecx
0x4B20B3: call    ??1TESObjectLIGH@@UAE@XZ; TESObjectLIGH::~TESObjectLIGH(void)
0x4B20B8: test    byte ptr [esp+4+arg_0], 1
0x4B20BD: jz      short loc_4B20C8
0x4B20BF: push    esi
0x4B20C0: call    FormHeapFree
0x4B20C5: add     esp, 4
0x4B20C8: mov     eax, esi
0x4B20CA: pop     esi
0x4B20CB: retn    4
