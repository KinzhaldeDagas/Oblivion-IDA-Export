0x71A110: push    esi
0x71A111: mov     esi, ecx
0x71A113: call    ??1NiTriStripsDynamicData@@UAE@XZ; NiTriStripsDynamicData::~NiTriStripsDynamicData(void)
0x71A118: test    byte ptr [esp+4+arg_0], 1
0x71A11D: jz      short loc_71A128
0x71A11F: push    esi
0x71A120: call    FormHeapFree
0x71A125: add     esp, 4
0x71A128: mov     eax, esi
0x71A12A: pop     esi
0x71A12B: retn    4
