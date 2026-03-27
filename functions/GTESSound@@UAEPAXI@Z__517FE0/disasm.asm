0x517FE0: push    esi
0x517FE1: mov     esi, ecx
0x517FE3: call    ??1TESSound@@UAE@XZ; TESSound::~TESSound(void)
0x517FE8: test    byte ptr [esp+4+arg_0], 1
0x517FED: jz      short loc_517FF8
0x517FEF: push    esi
0x517FF0: call    FormHeapFree
0x517FF5: add     esp, 4
0x517FF8: mov     eax, esi
0x517FFA: pop     esi
0x517FFB: retn    4
