0x4A9540: push    esi
0x4A9541: mov     esi, ecx
0x4A9543: call    ??1TESAmmo@@UAE@XZ; TESAmmo::~TESAmmo(void)
0x4A9548: test    byte ptr [esp+4+arg_0], 1
0x4A954D: jz      short loc_4A9558
0x4A954F: push    esi
0x4A9550: call    FormHeapFree
0x4A9555: add     esp, 4
0x4A9558: mov     eax, esi
0x4A955A: pop     esi
0x4A955B: retn    4
