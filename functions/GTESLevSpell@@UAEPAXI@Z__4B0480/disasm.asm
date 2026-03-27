0x4B0480: push    esi
0x4B0481: mov     esi, ecx
0x4B0483: call    ??1TESLevSpell@@UAE@XZ; TESLevSpell::~TESLevSpell(void)
0x4B0488: test    byte ptr [esp+4+arg_0], 1
0x4B048D: jz      short loc_4B0498
0x4B048F: push    esi
0x4B0490: call    FormHeapFree
0x4B0495: add     esp, 4
0x4B0498: mov     eax, esi
0x4B049A: pop     esi
0x4B049B: retn    4
