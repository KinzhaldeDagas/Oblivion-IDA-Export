0x531E60: push    esi
0x531E61: mov     esi, ecx
0x531E63: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x531E68: test    byte ptr [esp+4+arg_0], 1
0x531E6D: jz      short loc_531E78
0x531E6F: push    esi
0x531E70: call    FormHeapFree
0x531E75: add     esp, 4
0x531E78: mov     eax, esi
0x531E7A: pop     esi
0x531E7B: retn    4
