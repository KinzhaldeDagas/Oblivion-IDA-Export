0x8C3FA0: push    esi
0x8C3FA1: mov     esi, ecx
0x8C3FA3: call    ??1bhkTriangleShape@@UAE@XZ; bhkTriangleShape::~bhkTriangleShape(void)
0x8C3FA8: test    byte ptr [esp+4+arg_0], 1
0x8C3FAD: jz      short loc_8C3FB8
0x8C3FAF: push    esi
0x8C3FB0: call    FormHeapFree
0x8C3FB5: add     esp, 4
0x8C3FB8: mov     eax, esi
0x8C3FBA: pop     esi
0x8C3FBB: retn    4
