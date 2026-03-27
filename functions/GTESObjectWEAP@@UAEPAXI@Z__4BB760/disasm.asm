0x4BB760: push    esi
0x4BB761: mov     esi, ecx
0x4BB763: call    ??1TESObjectWEAP@@UAE@XZ; TESObjectWEAP::~TESObjectWEAP(void)
0x4BB768: test    byte ptr [esp+4+arg_0], 1
0x4BB76D: jz      short loc_4BB778
0x4BB76F: push    esi
0x4BB770: call    FormHeapFree
0x4BB775: add     esp, 4
0x4BB778: mov     eax, esi
0x4BB77A: pop     esi
0x4BB77B: retn    4
