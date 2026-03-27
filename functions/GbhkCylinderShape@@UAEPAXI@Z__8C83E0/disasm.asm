0x8C83E0: push    esi
0x8C83E1: mov     esi, ecx
0x8C83E3: call    ??1bhkCylinderShape@@UAE@XZ; bhkCylinderShape::~bhkCylinderShape(void)
0x8C83E8: test    byte ptr [esp+4+arg_0], 1
0x8C83ED: jz      short loc_8C83F8
0x8C83EF: push    esi
0x8C83F0: call    FormHeapFree
0x8C83F5: add     esp, 4
0x8C83F8: mov     eax, esi
0x8C83FA: pop     esi
0x8C83FB: retn    4
