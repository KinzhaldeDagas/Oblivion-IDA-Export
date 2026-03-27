0x531E30: push    esi
0x531E31: mov     esi, ecx
0x531E33: call    ??1bhkSphereRepShape@@UAE@XZ; bhkSphereRepShape::~bhkSphereRepShape(void)
0x531E38: test    byte ptr [esp+4+arg_0], 1
0x531E3D: jz      short loc_531E48
0x531E3F: push    esi
0x531E40: call    FormHeapFree
0x531E45: add     esp, 4
0x531E48: mov     eax, esi
0x531E4A: pop     esi
0x531E4B: retn    4
