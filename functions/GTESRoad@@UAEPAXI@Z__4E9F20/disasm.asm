0x4E9F20: push    esi
0x4E9F21: mov     esi, ecx
0x4E9F23: call    ??1TESRoad@@UAE@XZ; TESRoad::~TESRoad(void)
0x4E9F28: test    byte ptr [esp+4+arg_0], 1
0x4E9F2D: jz      short loc_4E9F38
0x4E9F2F: push    esi
0x4E9F30: call    FormHeapFree
0x4E9F35: add     esp, 4
0x4E9F38: mov     eax, esi
0x4E9F3A: pop     esi
0x4E9F3B: retn    4
