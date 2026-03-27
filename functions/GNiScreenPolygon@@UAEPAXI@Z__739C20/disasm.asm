0x739C20: push    esi
0x739C21: mov     esi, ecx
0x739C23: call    ??1NiScreenPolygon@@UAE@XZ; NiScreenPolygon::~NiScreenPolygon(void)
0x739C28: test    byte ptr [esp+4+arg_0], 1
0x739C2D: jz      short loc_739C38
0x739C2F: push    esi
0x739C30: call    FormHeapFree
0x739C35: add     esp, 4
0x739C38: mov     eax, esi
0x739C3A: pop     esi
0x739C3B: retn    4
