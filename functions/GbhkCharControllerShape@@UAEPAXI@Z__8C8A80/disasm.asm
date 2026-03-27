0x8C8A80: push    esi
0x8C8A81: mov     esi, ecx
0x8C8A83: call    ??1bhkCharControllerShape@@UAE@XZ; bhkCharControllerShape::~bhkCharControllerShape(void)
0x8C8A88: test    byte ptr [esp+4+arg_0], 1
0x8C8A8D: jz      short loc_8C8A98
0x8C8A8F: push    esi
0x8C8A90: call    FormHeapFree
0x8C8A95: add     esp, 4
0x8C8A98: mov     eax, esi
0x8C8A9A: pop     esi
0x8C8A9B: retn    4
