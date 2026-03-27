0x551D20: push    esi
0x551D21: mov     esi, ecx
0x551D23: call    ??1BSFaceGenModelMap@@UAE@XZ; BSFaceGenModelMap::~BSFaceGenModelMap(void)
0x551D28: test    byte ptr [esp+4+arg_0], 1
0x551D2D: jz      short loc_551D38
0x551D2F: push    esi
0x551D30: call    FormHeapFree
0x551D35: add     esp, 4
0x551D38: mov     eax, esi
0x551D3A: pop     esi
0x551D3B: retn    4
