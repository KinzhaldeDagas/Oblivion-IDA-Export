0x4B8A40: push    esi
0x4B8A41: mov     esi, ecx
0x4B8A43: call    ??1TESObjectDOOR@@UAE@XZ; TESObjectDOOR::~TESObjectDOOR(void)
0x4B8A48: test    byte ptr [esp+4+arg_0], 1
0x4B8A4D: jz      short loc_4B8A58
0x4B8A4F: push    esi
0x4B8A50: call    FormHeapFree
0x4B8A55: add     esp, 4
0x4B8A58: mov     eax, esi
0x4B8A5A: pop     esi
0x4B8A5B: retn    4
